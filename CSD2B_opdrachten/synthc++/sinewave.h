#ifndef _SINEWAVE_H_
#define _SINEWAVE_H_


#include <iostream>
#include "synthesizer.h"


class Sinewave : public Synthesizer
{
  public:

    Sinewave();

    ~Sinewave();

    float getSinewave();

    void setFrequency(float frequency);
    float getFrequency();
    void setAmplitude(float amplitude);
    float getAmplitude();

    int s;
    int nextS;
    float freq;


};


#endif
