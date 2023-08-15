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
    // Stream selector editor
    addSelectedStreamParameterEditor(Parameter::PROCESSOR_SCOPE, "current_stream", 15, 35);
    auto currStreamEditor = getParameterEditor("current_stream");
    currStreamEditor->setLayout(ParameterEditor::Layout::nameHidden);
    currStreamEditor->setSize(170, 20);
    
    // Channel selector editor
    addMaskChannelsParameterEditor(Parameter::PROCESSOR_SCOPE, "channels", 15, 75);
    getParameterEditor("channels")->setLayout(ParameterEditor::Layout::nameOnTop);
    getParameterEditor("channels")->setSize(80, 36);

    // Snapshot button
    takeSnapshotButton = std::make_unique<UtilityButton>("SNAP", titleFont);
    takeSnapshotButton->addListener(this);
    takeSnapshotButton->setRadius(3.0f);
    takeSnapshotButton->setBounds(110, 80, 75, 35);
    addAndMakeVisible(takeSnapshotButton.get());

    ChangeBroadcaster* snap = dynamic_cast<ChangeBroadcaster*>(p);
    snap->addChangeListener(this);

}

Visualizer* DataSnapshotEditor::createNewCanvas()
{
    return new DataSnapshotCanvas((DataSnapshot*) getProcessor());;
}


void DataSnapshotEditor::buttonClicked(Button* button)
{
    if (button == takeSnapshotButton.get() && CoreServices::getAcquisitionStatus())
    {
        NotificationParameter* snapParam = (NotificationParameter*) getProcessor()->getParameter("snap");
        snapParam->triggerNotification();
        takeSnapshotButton->setEnabledState(false);
    }
}

void DataSnapshotEditor::changeListenerCallback(ChangeBroadcaster* source)
{
	takeSnapshotButton->setEnabledState(true);

}