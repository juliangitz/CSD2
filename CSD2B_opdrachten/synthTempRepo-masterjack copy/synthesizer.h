#ifndef _SYNTHESIZER_H_
#define _SYNTHESIZER_H_

//BASE CLASS SYNTH

#include <iostream>

class Synthesizer
{
public:
  //constructor
  Synthesizer();
  //destructor
  ~Synthesizer();

  //audio process method
  virtual void process(float *outputBuffer, int numFrames) = 0;

  //__getters&setters__
  void setFrequency(float frequency);
  float getFrequency();

  void setAmplitude(float amplitude);
  float getAmplitude();

  virtual void updatePitch(float pitch) = 0;
protected:
  float pitch;
private:
  float frequency;
  float amplitude;
};


#endif //_SYNTHESIZER_H_
