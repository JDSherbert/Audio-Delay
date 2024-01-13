// ©2024 JDSherbert. All Rights Reserved.

#include <iostream>
#include "AudioDelay.h"

int main() 
{
    AudioDelay audioDelay(1000); // Adjust this value based on your desired delay duration

    // Simulating input audio samples
    std::vector<float> inputAudio = {0.1, 0.2, 0.3, 0.4, 0.5};

    std::cout << "Input audio: ";
    for (float sample : inputAudio) 
    {
        float delayedSample = audioDelay.ProcessSample(sample);
        std::cout << delayedSample << " ";
    }

    std::cout << std::endl;

    return 0;
}
