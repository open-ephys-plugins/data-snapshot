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


OptionsBar::OptionsBar(DataSnapshotCanvas* canvas_)
    : canvas(canvas_)
{

    saveButton = std::make_unique<UtilityButton>("SAVE", Font("Default", 12, Font::plain));
    saveButton->addListener(this);
    saveButton->setRadius(3.0f);
    saveButton->setClickingTogglesState(false);
    addAndMakeVisible(saveButton.get());

    colorMapSelector = std::make_unique<ComboBox>("Color Map Selector");
    colorMapSelector->addItem("Greys", (int)ColorMapId::GREYS);
    colorMapSelector->addItem("Cividis", (int)ColorMapId::CIVIDIS);
    colorMapSelector->addItem("Viridis", (int)ColorMapId::VIRIDIS);
    colorMapSelector->addItem("RdGy", (int) ColorMapId::RDGY);
    colorMapSelector->addItem("RdBu", (int)ColorMapId::RDBU);
    colorMapSelector->addItem("Spectral", (int)ColorMapId::SPECTRAL);
    colorMapSelector->setSelectedId((int) ColorMapId::GREYS, dontSendNotification);
    colorMapSelector->addListener(this);
    addAndMakeVisible(colorMapSelector.get());

    rangeSelector = std::make_unique<ComboBox>("Range selector");
    rangeSelector->addItem("+/- 25 uV", 25);
    rangeSelector->addItem("+/- 50 uV", 50);
    rangeSelector->addItem("+/- 75 uV", 75);
    rangeSelector->addItem("+/- 100 uV", 100);
    rangeSelector->addItem("+/- 250 uV", 250);
    rangeSelector->addItem("+/- 500 uV", 500);
    rangeSelector->addItem("+/- 1000 uV", 1000);
    rangeSelector->addItem("+/- 2000 uV", 2000);
    rangeSelector->setSelectedId(50, dontSendNotification);
    rangeSelector->addListener(this);
    addAndMakeVisible(rangeSelector.get());

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

void OptionsBar::comboBoxChanged(ComboBox* comboBox)
{
    if (comboBox == colorMapSelector.get())
    {
        canvas->setColorMap(comboBox->getSelectedId());
    }
    else if (comboBox == rangeSelector.get())
    {
        const int range = comboBox->getSelectedId();

        canvas->setRange(range);
    }

}

void OptionsBar::resized()
{

    const int verticalOffset = 7;

    saveButton->setBounds(getWidth() - 100, verticalOffset, 70, 25);

    colorMapSelector->setBounds(240, verticalOffset, 120, 25);

    rangeSelector->setBounds(60, verticalOffset, 120, 25);

}

void OptionsBar::paint(Graphics& g)
{
    g.fillAll(Colours::black);

    g.setColour(Colours::grey);

    const int verticalOffset = 4;

    g.drawText("Voltage", 0, verticalOffset, 53, 15, Justification::centredRight, false);
    g.drawText("Range", 0, verticalOffset + 15, 53, 15, Justification::centredRight, false);
    g.drawText("Color", 190, verticalOffset, 43, 15, Justification::centredRight, false);
    g.drawText("Map", 190, verticalOffset + 15, 43, 15, Justification::centredRight, false);

}

void OptionsBar::saveCustomParametersToXml(XmlElement* xml)
{
    xml->setAttribute("color_map", colorMapSelector->getSelectedId());
    xml->setAttribute("plot_range", rangeSelector->getSelectedId());
}

void OptionsBar::loadCustomParametersFromXml(XmlElement* xml)
{
    colorMapSelector->setSelectedId(xml->getIntAttribute("color_map", 1), sendNotification);
    rangeSelector->setSelectedId(xml->getIntAttribute("plot_range", 50), sendNotification);
}

DataSnapshotCanvas::DataSnapshotCanvas(DataSnapshot* processor_)
	: processor(processor_)
{
	DataSnapshot* ds = dynamic_cast<DataSnapshot*>(processor_);
	ds->addChangeListener(this);

    optionsBar = std::make_unique<OptionsBar>(this);
    addAndMakeVisible(optionsBar.get());

    image = std::make_unique<Image>(Image::RGB, 4000, 16, true);

    Graphics g(*image);
    g.fillAll(Colour(25,25,85));
}


void DataSnapshotCanvas::resized()
{
	optionsBar->setBounds(0, getHeight() - 40, getWidth(), 40);
}


void DataSnapshotCanvas::paint(Graphics& g)
{

	g.fillAll(Colours::black);

    // draw image
    g.drawImageWithin(*image, 20, 20, getWidth() - 40, getHeight() - 70, RectanglePlacement::stretchToFit, false);

}

void DataSnapshotCanvas::setRange(int rangeMicrovolts)
{
    // set range
    range = (float)rangeMicrovolts;
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
    optionsBar->saveCustomParametersToXml(xml);
}

void DataSnapshotCanvas::loadCustomParametersFromXml(XmlElement* xml)
{
    optionsBar->loadCustomParametersFromXml(xml);
}
