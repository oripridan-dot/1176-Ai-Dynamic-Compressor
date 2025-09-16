#pragma once
#include <JuceHeader.h>

class A1176AiAudioProcessor : public juce::AudioProcessor
{
public:
    A1176AiAudioProcessor();
    ~A1176AiAudioProcessor() override;

    void prepareToPlay(double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;
    void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&) override;

    juce::AudioProcessorEditor* createEditor() override;
    bool hasEditor() const override { return true; } // We will have a GUI

    const juce::String getName() const override { return JucePlugin_Name; }
    // ... other standard JUCE overrides ...

private:
    // TODO: SPRINT 1 - Declare DSP variables here (e.g., envelope, coefficients)
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(A1176AiAudioProcessor)
};
