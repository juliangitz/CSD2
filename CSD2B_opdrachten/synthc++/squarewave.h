#ifndef _SQUAREWAVE_H_
#define _SQUAREWAVE_H_


#include <iostream>

#include "synthesizer.h"


class Squarewave : public Synthesizer
{
  public:

    Squarewave();

    ~Squarewave();

    float getSquarewave();
    void setFrequency(float frequency);
    float getFrequency();
    void setAmplitude(float amplitude);
    float getAmplitude();
    int s;
    int nextS;


};


#endif
