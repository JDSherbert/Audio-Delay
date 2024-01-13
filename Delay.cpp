// ©2024 JDSherbert. All Rights Reserved.

#include "AudioDelay.h"

AudioDelay::AudioDelay(int delayInSamples) 
: delayBuffer(delayInSamples, 0)
, writeIndex(0)
{
}

float AudioDelay::ProcessSample(float input) 
{
    float delayedSample = delayBuffer[writeIndex];
    delayBuffer[writeIndex] = input;

    writeIndex = (writeIndex + 1) % delayBuffer.size();

    return delayedSample;
}
