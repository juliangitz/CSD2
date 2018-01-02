#include "synthesizer.h"

//constructor
Synthesizer::Synthesizer()
{
  std::cout << "Inside the Synthesizer constructor.\n";

}

//destructor
Synthesizer::~Synthesizer()
{
  std::cout << "Inside the Synthesizer destructor.\n";
}

void Synthesizer::process(void* outputBuffer, int numFrames, int samplerate)
{
  //std::cout << "Inside the Synthesizer process method.\n";
  //void* outputBuffer = new int[d];
}

//__getters&setters__
void Synthesizer::setFrequency(float frequency)
{

//  return Output * 0.5; // Master Volume
  this->frequency = frequency;

}

float Synthesizer::getFrequency()
{
  std::cout << "Inside the Synthesizer getFrequency method.\n";
  std::cout << "synth frequenty is now set to:" << frequency << "\n";
  return frequency;
}

void Synthesizer::setAmplitude(float amplitude)
{
  std::cout << "Inside the Synthesizer setAmplitude method.\n";

  this->amplitude = amplitude;
}

float Synthesizer::getAmplitude()
{
  std::cout << "Inside the Synthesizer getAmplitude method.\n";
  std::cout << "synth ampitude is now set to:" << amplitude << "\n";
  return amplitude;
}
