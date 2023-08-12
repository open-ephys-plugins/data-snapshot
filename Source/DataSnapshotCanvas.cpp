/*
------------------------------------------------------------------

This file is part of a plugin for the Open Ephys GUI
Copyright (C) 2022 Open Ephys

------------------------------------------------------------------

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#include "DataSnapshotCanvas.h"

#include "DataSnapshot.h"
#include "ColorMap.h"


OptionsBar::OptionsBar(DataSnapshotCanvas* canvas_, DataSnapshot* processor)
    : canvas(canvas_)
    , ParameterEditorOwner(this)
{

    saveButton = std::make_unique<UtilityButton>("SAVE", Font("Default", 12, Font::plain));
    saveButton->addListener(this);
    saveButton->setRadius(3.0f);
    saveButton->setClickingTogglesState(false);
    addAndMakeVisible(saveButton.get());

    ComboBoxParameterEditor* rangeSelector = new ComboBoxParameterEditor(canvas->getParameter("voltage_range"), 24, 220);
    rangeSelector->getLabel()->setColour(Label::textColourId, Colours::white);
    rangeSelector->setLayout(ParameterEditor::Layout::nameOnLeft);
    addParameterEditor(rangeSelector, 20, 7);

    TextBoxParameterEditor* pEditor = new TextBoxParameterEditor(processor->getParameter("window"), 22, 160);
    pEditor->getLabel()->setColour(Label::textColourId, Colours::white);
    pEditor->setLayout(ParameterEditor::Layout::nameOnLeft);
    addParameterEditor(pEditor, 260, 7);

    ComboBoxParameterEditor* colorMapEditor = new ComboBoxParameterEditor(canvas->getParameter("color_map"), 24, 160);
    colorMapEditor->getLabel()->setColour(Label::textColourId, Colours::white);
    colorMapEditor->setLayout(ParameterEditor::Layout::nameOnLeft);
    addParameterEditor(colorMapEditor, 450, 7);

}

void OptionsBar::buttonClicked(Button* button)
{
    if (button == saveButton.get())
    {
        FileChooser chooser("Save snapshot to file...",
            File(),
            "*.png");

        if (chooser.browseForFileToSave(true))
        {
            File file = chooser.getResult();

            if (file.exists())
                file.deleteFile();

            canvas->saveImage(file);
        }
    }
}

void OptionsBar::resized()
{

    const int verticalOffset = 7;

    saveButton->setBounds(getWidth() - 100, verticalOffset, 70, 25);

    // getParameterEditor("voltage_range")->setTopLeftPosition(20, verticalOffset);

    // getParameterEditor("window")->setTopLeftPosition(255, verticalOffset);

    // getParameterEditor("color_map")->setTopLeftPosition(390, verticalOffset);
}

void OptionsBar::paint(Graphics& g)
{
    g.fillAll(Colours::black);

    g.setColour(Colours::grey);

}


// ---------------------------------------------------------------------------------------------------------------
DataSnapshotCanvas::DataSnapshotCanvas(DataSnapshot* processor_)
	: Visualizer(processor_),
      processor(processor_)
{
	DataSnapshot* ds = dynamic_cast<DataSnapshot*>(processor_);
	ds->addChangeListener(this);

    Array<String> colorMaps;
    colorMaps.add("Greys");
    colorMaps.add("Cividis");
    colorMaps.add("Viridis");
    colorMaps.add("RdGy");
    colorMaps.add("RdBu");
    addCategoricalParameter("color_map", "Color Map", "Color map for data snapshot", colorMaps, 0);

    Array<String> ranges;
    ranges.add("+/- 25 uV");
    ranges.add("+/- 50 uV");
    ranges.add("+/- 75 uV");
    ranges.add("+/- 100 uV");
    ranges.add("+/- 250 uV");
    ranges.add("+/- 500 uV");
    ranges.add("+/- 1000 uV");
    ranges.add("+/- 2000 uV");

    for(auto vRange : ranges)
    {
        voltageRanges[vRange] = vRange.substring(4, vRange.length() - 3).getIntValue();
    }

    addCategoricalParameter("voltage_range", "Voltage Range", "Voltage Range for data snapshot", ranges, 1);

    optionsBar = new OptionsBar(this, processor);
    addParameterEditorOwner(optionsBar);

    image = std::make_unique<Image>(Image::RGB, 4000, 16, true);

    Graphics g(*image);
    g.fillAll(Colour(25,25,85));
}


void DataSnapshotCanvas::resized()
{
	optionsBar->setBounds(0, getHeight() - 50, getWidth(), 50);
}


void DataSnapshotCanvas::paint(Graphics& g)
{

	g.fillAll(Colours::black);

    // draw image
    g.drawImageWithin(*image, 20, 20, getWidth() - 40, getHeight() - 80, RectanglePlacement::stretchToFit, false);

}


void DataSnapshotCanvas::parameterValueChanged(Parameter* param)
{
    //LOGD("Changing parameter: ", param->getName());

    if (param->getName().equalsIgnoreCase("color_map"))
    {
        int colormapIndex = (int)param->getValue() + 1;
        ColorMap::setColorMap((ColorMapId) colormapIndex);
    }
    else if (param->getName().equalsIgnoreCase("voltage_range"))
    {
        String rangeValue = param->getValueAsString();
        range = voltageRanges[rangeValue];
    }
}


void DataSnapshotCanvas::setColorMap(int colormapIndex)
{
    // set colormap
	ColorMap::setColorMap((ColorMapId) colormapIndex);
}

void DataSnapshotCanvas::saveImage(File& file)
{
    /// save image to file
    FileOutputStream stream(file);
    PNGImageFormat pngWriter;
    pngWriter.writeImageToStream(*image, stream);
}

void DataSnapshotCanvas::changeListenerCallback(ChangeBroadcaster* source)
{

    // copy snapshot values
	AudioBuffer<float>* snapshot = processor->getSnapshot();

    if (image->getWidth() != snapshot->getNumSamples() || image->getHeight() != snapshot->getNumChannels())
    {
        image.reset();
        image = std::make_unique<Image>(Image::RGB, snapshot->getNumSamples(), snapshot->getNumChannels(), true);
    }

    const int numChannels = snapshot->getNumChannels();
		
	for (int i = 0; i < numChannels; i++)
	{
		for (int j = 0; j < snapshot->getNumSamples(); j++)
		{
            float value = snapshot->getSample(i, j);
			value = (value + range) / (2 * range);
            
            Colour colour = ColorMap::getColorForNormalizedValue(value);

            image->setPixelAt(j, numChannels - i - 1, colour);
		}
	}

    repaint();
}

void DataSnapshotCanvas::saveCustomParametersToXml(XmlElement* xml)
{

}

void DataSnapshotCanvas::loadCustomParametersFromXml(XmlElement* xml)
{

}
