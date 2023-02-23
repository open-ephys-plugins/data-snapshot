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


#include "DataSnapshotEditor.h"

#include "DataSnapshotCanvas.h"
#include "DataSnapshot.h"


DataSnapshotEditor::DataSnapshotEditor(GenericProcessor* p)
    : VisualizerEditor(p, "Snapshot", 200)
{

    streamSelection = std::make_unique<ComboBox>("Stream Selector");
    streamSelection->setBounds(15, 32, 180, 20);
    streamSelection->addListener(this);
    addAndMakeVisible(streamSelection.get());
    
    addTextBoxParameterEditor("window", 15, 55);
    addMaskChannelsParameterEditor("channels", 15, 100);

    takeSnapshotButton = std::make_unique<UtilityButton>("SNAP", titleFont);
    takeSnapshotButton->addListener(this);
    takeSnapshotButton->setRadius(3.0f);
    takeSnapshotButton->setBounds(110, 80, 80, 35);
    addAndMakeVisible(takeSnapshotButton.get());

    ChangeBroadcaster* snap = dynamic_cast<ChangeBroadcaster*>(p);
    snap->addChangeListener(this);

}

Visualizer* DataSnapshotEditor::createNewCanvas()
{
    return new DataSnapshotCanvas((DataSnapshot*) getProcessor());;
}

void DataSnapshotEditor::updateSettings()
{
 
    streamSelection->clear();

	for (auto stream : getProcessor()->getDataStreams())
	{
        if (currentStream == 0)
            currentStream = stream->getStreamId();
        
		streamSelection->addItem(stream->getName(), stream->getStreamId());
	}

    if (streamSelection->indexOfItemId(currentStream) == -1)
    {
        if (streamSelection->getNumItems() > 0)
            currentStream = streamSelection->getItemId(0);
        else
            currentStream = 0;
    }
		
    if (currentStream > 0)
    {
        streamSelection->setSelectedId(currentStream, sendNotification);
    }
        
    
}

void DataSnapshotEditor::comboBoxChanged(ComboBox* cb)
{
    if (cb == streamSelection.get())
    {

		currentStream = cb->getSelectedId();
        
        if (currentStream > 0)
        {
            getProcessor()->getParameter("current_stream")->setNextValue(currentStream);
            MaskChannelsParameter* param = dynamic_cast<MaskChannelsParameter*>(getProcessor()->getParameter("channels"));
            param->setChannelCount(getProcessor()->getDataStream(currentStream)->getChannelCount());
            param->setNextValue(param->getValue());
        }
    }

}


void DataSnapshotEditor::buttonClicked(Button* button)
{
    if (button == takeSnapshotButton.get() && CoreServices::getAcquisitionStatus())
    {
        getProcessor()->getParameter("snap")->setNextValue(true);
        takeSnapshotButton->setEnabledState(false);
    }
}

void DataSnapshotEditor::changeListenerCallback(ChangeBroadcaster* source)
{
	takeSnapshotButton->setEnabledState(true);

}