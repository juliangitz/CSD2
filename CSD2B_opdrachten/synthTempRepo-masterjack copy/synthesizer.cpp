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

//__getters&setters__
void Synthesizer::setFrequency(float frequency)
{
  std::cout << "Inside the Synthesizer setFrequency method.\n";
  this->frequency = frequency;
}

float Synthesizer::getFrequency()
{
  std::cout << "Inside the Synthesizer getFrequency method.\n";

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
  return amplitude;
}
