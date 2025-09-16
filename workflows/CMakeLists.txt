# CMake build script for 1176-Ai

cmake_minimum_required(VERSION 3.15)
project("1176Ai" VERSION 1.0.0)

# Find the JUCE library
# NOTE: You may need to change the path to where you have JUCE installed
find_package(JUCE REQUIRED)

# Add our source files
add_subdirectory(../Source)

# Create the plugin target
juce_add_plugin("1176Ai"
    COMPANY_NAME "CLA-Ai"
    IS_SYNTH FALSE
    PLUGIN_MANUFACTURER_CODE "CLAI"
    PLUGIN_CODE "1176"
    FORMATS VST3 AU
)

# Link the source files to our plugin target
target_sources("1176Ai" PRIVATE
    Source/PluginProcessor.cpp
    Source/PluginProcessor.h
)

