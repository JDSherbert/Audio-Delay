// ©2024 JDSherbert. All Rights Reserved.

#pragma once

#include <vector>

class Delay 
{

public:
    AudioDelay(int delayInSamples);

    float ProcessSample(float input);

private:
    std::vector<float> delayBuffer;
    size_t writeIndex;

};
