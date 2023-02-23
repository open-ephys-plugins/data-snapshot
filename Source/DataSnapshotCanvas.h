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

#ifndef DATASNAPSHOTCANVAS_H_INCLUDED
#define DATASNAPSHOTCANVAS_H_INCLUDED

#include <VisualizerWindowHeaders.h>

class DataSnapshot;
class DataSnapshotCanvas;

/**

    Snapshot options interface

*/
class OptionsBar :
    public Component,
    public Button::Listener,
    public ComboBox::Listener
{
public:
    /** Constructor */
    OptionsBar(DataSnapshotCanvas* canvas);

    /** Destructor */
    ~OptionsBar() { }

    /** Respond to button clicks */
    void buttonClicked(Button* button) override;

    /** Respond to button clicks */
    void comboBoxChanged(ComboBox* comboBox) override;

    /** Called when the component changes size */
    void resized();

    /** Renders component background */
    void paint(Graphics& g);

    /** Save plot parameters*/
    void saveCustomParametersToXml(XmlElement* xml);

    /** Load plot parameters*/
    void loadCustomParametersFromXml(XmlElement* xml);

private:

    std::unique_ptr<UtilityButton> saveButton;

    std::unique_ptr<ComboBox> colorMapSelector;

    std::unique_ptr<ComboBox> rangeSelector;


    DataSnapshotCanvas* canvas;

};

/**
* 
	Draws data in real time

*/
class DataSnapshotCanvas : public Visualizer,
	 public ChangeListener
{
public:

	/** Constructor */
	DataSnapshotCanvas(DataSnapshot* processor);

	/** Destructor */
	~DataSnapshotCanvas() { }

	/** Updates boundaries of sub-components whenever the canvas size changes */
	void resized() override;

	/** Called when the visualizer's tab becomes visible again */
	void refreshState() override { }

	/** Updates settings */
	void update() override { }

	/** Called instead of "repaint()" to avoid re-painting sub-components*/
	void refresh() override { }

	/** Draws the canvas background */
	void paint(Graphics& g) override;

	/** Sets the color range */
	void setRange(int rangeMicrovolts);

	/** Sets the color map */
	void setColorMap(int colormapIndex);

	/** Saves current image */
	void saveImage(File& file);

	/** Handles change message from processor */
	void changeListenerCallback(ChangeBroadcaster* source) override;

	/** Saves parameters */
	void saveCustomParametersToXml(XmlElement* xml) override;

	/** Loads parameters */
	void loadCustomParametersFromXml(XmlElement* xml) override;

private:

	/** Pointer to the processor class */
	DataSnapshot* processor;

	/** Image to draw*/
	std::unique_ptr<Image> image;

	/** Options bar*/
	std::unique_ptr<OptionsBar> optionsBar;

	/** Data range (in microvolts) */
	float range = 50;

	/** Generates an assertion if this class leaks */
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DataSnapshotCanvas);
};


#endif // SPECTRUMCANVAS_H_INCLUDED