#include "PluginProcessor.h"
#include "PluginEditor.h" // We'll create this file for the GUI later

A1176AiAudioProcessor::A1176AiAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor(BusesProperties().withInput("Input", juce::AudioChannelSet::stereo(), true)
                                       .withOutput("Output", juce::AudioChannelSet::stereo(), true))
#endif
{
}

A1176AiAudioProcessor::~A1176AiAudioProcessor()
{
}

void A1176AiAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{
    // TODO: SPRINT 1 - Initialize DSP variables, calculate coefficients
}

void A1176AiAudioProcessor::releaseResources()
{
}

void A1176AiAudioProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();

    // In case we have more outputs than inputs, clear any extra channels.
    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear(i, 0, buffer.getNumSamples());

    // --- THIS IS WHERE OUR DSP WILL LIVE ---
    // For now, it's just an empty passthrough.
    // TODO: SPRINT 1 - Insert core DSP logic from our C++ example.
    // TODO: SPRINT 2 - Add Input and Output saturation modules.
}

// ... other standard JUCE functions ...
