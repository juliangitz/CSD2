#ifndef _SIMPLE_SYNTH_H_
#define _SIMPLE_SYNTH_H_

//DERIVED CLASS SYNTH

#include <iostream>

//include sinewave.h for sine function
#include "sinewave.h"
#include "squarewave.h"
#include "noise.h"
#include "saw.h"
#include "triangle.h"
#include "synthesizer.h"


class SimpleSynth : public Synthesizer
{
public:
  //constructor
  SimpleSynth();
  //destructor
  ~SimpleSynth();


void process(float* outputBuffer, int numFrames) override;

void setWaveType(int wavetype);

void updatePitch(float pitch) override; 




private:
  //int wavetype;
  Sinewave sine;
  Squarewave square;
  Noise noise;
  SawWave saw;
  Triangle triangle;
  Oscilator *oscilator;


};


#endif
