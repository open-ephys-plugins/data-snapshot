/*
    ------------------------------------------------------------------

    This file is part of the Open Ephys GUI
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

#include "DataSnapshot.h"

#include "DataSnapshotEditor.h"


DataSnapshot::DataSnapshot() 
    : GenericProcessor("Data Snapshot")
    , currentStream(0)
    , numChannels(0)
    , numSamples(0)
{
}


DataSnapshot::~DataSnapshot()
{

}

void DataSnapshot::registerParameters()
{
    addIntParameter(Parameter::PROCESSOR_SCOPE,
        "window", "Window", "Snapshot size in ms",
        100, 20, 200, false);
    
    addSelectedStreamParameter(Parameter::PROCESSOR_SCOPE,
        "current_stream", "Current Stream", "Currently selected stream",
        {}, 0, false);

    addMaskChannelsParameter(Parameter::PROCESSOR_SCOPE,
        "channels", "Channels", "Snapshot channels");

    addEventNotificationParameter(Parameter::PROCESSOR_SCOPE,
        "snap", "Snap",  "Used to trigger snapshots", false);
}


AudioProcessorEditor* DataSnapshot::createEditor()
{
    editor = std::make_unique<DataSnapshotEditor>(this);
    return editor.get();
}


void DataSnapshot::updateSettings()
{

}


bool DataSnapshot::streamExists(uint16 streamId)
{
    for (auto stream : getDataStreams())
    {
        if (stream->getStreamId() == streamId)
            return true;
    }
    
    return false;
    
}


void DataSnapshot::parameterValueChanged(Parameter* parameter)
{

    if (parameter->getName().equalsIgnoreCase("snap") && CoreServices::getAcquisitionStatus())
    {
        snapSampleIndex = 0;
        return;
    }

    if (parameter->getName().equalsIgnoreCase("current_stream"))
    {

        int streamIndex = (int) parameter->getValue();
        
        if(streamIndex < 0 || streamIndex >= getDataStreams().size())
        {
            currentStream = 0;
            numChannels = 0;
            numSamples = 0;
        }
        else
        {
            currentStream = getDataStreams()[streamIndex]->getStreamId();
            numChannels = getDataStream(currentStream)->getChannelCount();
            numSamples = int(getDataStream(currentStream)->getSampleRate() * ((float)getParameter("window")->getValue() / 1000));
        }

        MaskChannelsParameter* chansParam = (MaskChannelsParameter*)getParameter("channels");
        chansParam->setChannelCount(numChannels);
        chansParam->valueChanged();

    }
    else if (parameter->getName().equalsIgnoreCase("window"))
    {

        if (streamExists(currentStream))
        {
            numSamples = int(getDataStream(currentStream)->getSampleRate() * ((float)parameter->getValue() / 1000));
        }
      
    }
    else if (parameter->getName().equalsIgnoreCase("channels"))
    {
        MaskChannelsParameter* param = (MaskChannelsParameter*)parameter;
        numChannels = param->getArrayValue().size();

       // std::cout << "Num channels: " << numChannels << std::endl;
    }

    if(numChannels > 0  && numSamples > 0)
    {
        LOGDD(" Snapshot buffer resized: ", numChannels, "x", numSamples);
        snapshotBuffer.setSize(numChannels, numSamples);
        snapshotBuffer.clear();
    }
}


void DataSnapshot::process(AudioBuffer<float>& buffer)
{

    if (snapSampleIndex > -1)
    {
        int samplesPerBlock = getNumSamplesInBlock(currentStream);
        //std::cout << "Samples per block: " << samplesPerBlock << std::endl;

        DataStream* stream = getDataStream(currentStream);

        int samplesToCopy = jmin(numSamples - snapSampleIndex, samplesPerBlock);
       // std::cout << "Samples to copy: " << samplesPerBlock << std::endl;

        int ch = 0;

        for (auto localChannelIndex : *getParameter("channels")->getValue().getArray())
        {
            int globalChannelIndex = getGlobalChannelIndex(stream->getStreamId(), (int)localChannelIndex);

            snapshotBuffer.copyFrom(ch,                 // destChannel
                                    snapSampleIndex,    // destSample
                                    buffer,             // source
                                    globalChannelIndex, // sourceChannel
                                    0,                  // source start sample
                                    samplesToCopy);     // num samples

            ch++;

        }
        
        snapSampleIndex += samplesToCopy;

        if (snapSampleIndex == numSamples)
        {
            snapSampleIndex = -1;
            sendChangeMessage();
        }
    }
	 
}


void DataSnapshot::handleBroadcastMessage(String message)
{

}


AudioBuffer<float>* DataSnapshot::getSnapshot()
{
    return &snapshotBuffer;
}


void DataSnapshot::saveCustomParametersToXml(XmlElement* parentElement)
{

}


void DataSnapshot::loadCustomParametersFromXml(XmlElement* parentElement)
{

}