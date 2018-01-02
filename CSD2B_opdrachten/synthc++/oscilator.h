#ifndef _OCSILATOR_H_
#define _OCSILATOR_H_

#include <iostream>
#include <cmath>
#include "synthesizer.h"


class Oscilator : public Synthesizer

{
public:
  Oscilator();
  ~Oscilator();

  int Time;
  double Output;
  void out();
  //float getFrequency();
  //float getAmplitude();
  void process(void* outputBuffer, int numFrames, int samplerate);
//  float frequency;
//  float amplitude;
  int s;



};

#endif
