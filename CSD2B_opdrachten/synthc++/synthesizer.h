#ifndef _SYNTHESIZER_H_
#define _SYNTHESIZER_H_


//chrono is used for time
#include <chrono>
//threading
#include <thread>
#include <iostream>
#include <cmath>


#define SINE 0
#define SQUARE 1


class Synthesizer

{
public:
  //constructor
  Synthesizer();
  //destructor
  ~Synthesizer();

  //audio process method
  void process(void* outputBuffer, int numFrames, int samplerate);

  //__getters&setters__
  void setFrequency(float frequency);
  float getFrequency();

  void setAmplitude(float amplitude);
  float getAmplitude();

  //TODO: add get sample function
  float getSample();


 //private:
  float frequency;
  float amplitude;
  int Time;
  double Output;
  int s;
  int waveType;
  int type;
  float freq;
  float amp;
};


#endif //_SYNTHESIZER_H_
