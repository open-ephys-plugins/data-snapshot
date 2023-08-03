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
    
    addIntParameter(Parameter::PROCESSOR_SCOPE,
        "current_stream", "Current Stream", "Currently selected stream",
        0, 0, 200000, false);

    addMaskChannelsParameter(Parameter::PROCESSOR_SCOPE,
        "channels", "Channels", "Snapshot channels");

    addBooleanParameter(Parameter::PROCESSOR_SCOPE,
        "snap", "Snap",  "Used to trigger snapshots", false);
}


AudioProcessorEditor* DataSnapshot::createEditor()
{
    editor = std::make_unique<DataSnapshotEditor>(this);
    return editor.get();
}


void DataSnapshot::updateSettings()
{

    for (auto stream : getDataStreams())
    {
        if (!streamExists(currentStream))
            currentStream = stream->getStreamId();
    }

    if (streamExists(currentStream))
    {
        numChannels = getDataStream(currentStream)->getChannelCount();
    }

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
        //std::cout << "Snap sample index = 0." << std::endl;
        snapSampleIndex = 0;
        return;
    }

    if (parameter->getName().equalsIgnoreCase("current_stream"))
    {

        uint16 candidateStream = (uint16) (int) parameter->getValue();
        
        if (streamExists(candidateStream))
            currentStream = candidateStream;

    }
    else if (parameter->getName().equalsIgnoreCase("window"))
    {

        if (streamExists(currentStream))
        {
            numSamples = int(getDataStream(currentStream)->getSampleRate() * ((float)parameter->getValue() / 1000));
        }
      
        std::cout << "********************* Window size in samples: " << numSamples << std::endl;

    }
    else if (parameter->getName().equalsIgnoreCase("channels"))
    {
        MaskChannelsParameter* param = (MaskChannelsParameter*)parameter;
        numChannels = param->getArrayValue().size();

       // std::cout << "Num channels: " << numChannels << std::endl;
    }

    if (numChannels > 0 && numSamples > 0)
    {
        //std::cout << "Setting buffer to " << numChannels << " x " << numSamples << std::endl;
        snapshotBuffer.setSize(numChannels, numSamples);
    }
    else {
        //std::cout << "Not creating buffer, numChannels = " << numChannels << ", numSamples = " << numSamples << std::endl;
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

            //std::cout << globalChannelIndex << " " << snapSampleIndex << " " << ch << " " << samplesToCopy << std::endl;

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