![image](https://github.com/JDSherbert/Audio-Delay/assets/43964243/696b4885-296f-4291-936e-b512fadc768c)

# Audio: Delay

<!-- Header Start -->
<a href = "https://learn.microsoft.com/en-us/cpp/cpp-language"> <img height="40" img width="40" src="https://cdn.simpleicons.org/c++"> </a>
<img align="right" alt="Stars Badge" src="https://img.shields.io/github/stars/jdsherbert/Audio-Delay?label=%E2%AD%90"/>
<img align="right" alt="Forks Badge" src="https://img.shields.io/github/forks/jdsherbert/Audio-Delay?label=%F0%9F%8D%B4"/>
<img align="right" alt="Watchers Badge" src="https://img.shields.io/github/watchers/jdsherbert/Audio-Delay?label=%F0%9F%91%81%EF%B8%8F"/>
<img align="right" alt="Issues Badge" src="https://img.shields.io/github/issues/jdsherbert/Audio-Delay?label=%E2%9A%A0%EF%B8%8F"/>
<img align="right" src="https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2FJDSherbert%2FAudio-Delay%2Fhit-counter%2FREADME&count_bg=%2379C83D&title_bg=%23555555&labelColor=0E1128&title=🔍&style=for-the-badge">
<!-- Header End --> 

-----------------------------------------------------------------------

<a href=""> 
  <img align="left" alt="Audio Processing" src="https://img.shields.io/badge/Audio%20Processing-black?style=for-the-badge&logo=audacity&logoColor=white&color=black&labelColor=black"> </a>
  
<a href="https://choosealicense.com/licenses/mit/"> 
  <img align="right" alt="License" src="https://img.shields.io/badge/License%20:%20MIT-black?style=for-the-badge&logo=mit&logoColor=white&color=black&labelColor=black"> </a>
  
<br></br>

-----------------------------------------------------------------------
## Overview
Digital Signal Processing (DSP) delay is a fundamental technique employed by audio engineers to manipulate the timing of audio signals in the digital domain. Delays introduce a temporal offset between the original and processed signals, enabling the creation of various effects, spatial enhancements, and artistic sound design. This repository provides a basic implementation of a DSP delay in C++. The purpose is to illustrate the core concepts of digital audio delay and how it can be integrated into audio processing workflows.

### What is DSP Delay?
DSP delay involves introducing a time delay to an audio signal in the digital domain. This delay can be implemented as a simple time offset or as a more complex effect with feedback, modulation, and filtering. Audio engineers leverage DSP delays for a myriad of purposes, ranging from basic echo effects to sophisticated spatial enhancements.

### Key Concepts
#### - Delay Time
The duration between the original sound and its delayed version. Short delay times create flanger or chorus effects, while longer delays contribute to echo and reverb.
#### - Feedback
The portion of the delayed signal that is fed back into the delay line.
Feedback is crucial for creating sustain, decay, or infinite reverberation in delay-based effects.

#### - Modulation and Filtering
Dynamically varying the delay time introduces shifting effects like chorus or flanger. Applying filters to the delayed signal can alter its frequency content.

#### - Haas Effect
Uses a short delay between two identical signals to create a perception of localization or spaciousness. Ideal for widening the stereo image without introducing noticeable echo.



-----------------------------------------------------------------------

