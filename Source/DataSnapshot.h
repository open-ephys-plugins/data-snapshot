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

//This prevents include loops. We recommend changing the macro to a name suitable for your plugin
#ifndef DATASNAPSHOT_H_DEFINED
#define DATASNAPSHOT_H_DEFINED

#include <ProcessorHeaders.h>


/** 
	A plugin that includes a canvas for displaying incoming data
*/

class DataSnapshot : public GenericProcessor,
				     public ChangeBroadcaster
{
public:
	/** The class constructor, used to initialize any members.*/
	DataSnapshot();

	/** The class destructor, used to deallocate memory*/
	~DataSnapshot();

	/** If the processor has a custom editor, this method must be defined to instantiate it. */
	AudioProcessorEditor* createEditor() override;

	/** Called every time the settings of an upstream plugin are changed.
		Allows the processor to handle variations in the channel configuration or any other parameter
		passed through signal chain. The processor can use this function to modify channel objects that
		will be passed to downstream plugins. */
	void updateSettings() override;

	/** Called when a parameter value is changed*/
	void parameterValueChanged(Parameter* param);

	/** Defines the functionality of the processor.
		The process method is called every time a new data buffer is available.
		Visualizer plugins typically use this method to send data to the canvas for display purposes */
	void process(AudioBuffer<float>& buffer) override;

	/** Handles broadcast messages sent during acquisition
		Called automatically whenever a broadcast message is sent through the signal chain */
	void handleBroadcastMessage(String message) override;

	/** Saving custom settings to XML. This method is not needed to save the state of
		Parameter objects */
	void saveCustomParametersToXml(XmlElement* parentElement) override;

	/** Load custom settings from XML. This method is not needed to load the state of
		Parameter objects*/
	void loadCustomParametersFromXml(XmlElement* parentElement) override;

	/** Returns a pointer to the snapshot buffer */
	AudioBuffer<float>* getSnapshot();

private:

	/**Check whether data stream exists */
	bool streamExists(uint16 streamId);

	AudioBuffer<float> snapshotBuffer;

	int numSamples;
	int numChannels;
	uint16 currentStream;
	int snapSampleIndex;

	/** Generates an assertion if this class leaks */
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DataSnapshot);

};

#endif // DataSnapshot_H_DEFINED