#include "sinewave.h"
//#include "simpleSynth.h"


Sinewave::Sinewave() : s(0), Synthesizer()
{

  std::cout << "Inside the Sinewave constructor.\n";

}

Sinewave::~Sinewave()
{
  std::cout << "Inside the Sinewave destructor.\n";
}



float Sinewave::getSinewave()
{

  std::cout << "ampitude is now:" << amplitude << "\n";
  std::cout << "freq is now:" << frequency << "\n";
  nextS = s;
  Output = sin(frequency * 2.0 * 3.14159 * nextS);
  std::cout << "output is now:" << Output << "\n";
  nextS = s + 16;
  s = nextS;

  std::cout << "s is now:" << nextS << "\n";
  return Output;


}

void Sinewave::setFrequency(float frequency)
{

//  return Output * 0.5; // Master Volume
  this->frequency = frequency;

}

void Sinewave::setAmplitude(float amplitude)
{
  std::cout << "Inside the sinewave setAmplitude method.\n";

  this->amplitude = amplitude;
}

float Sinewave::getAmplitude()
{
  std::cout << "Inside the Sinewave getAmplitude method.\n";
  std::cout << "synth ampitude is now set to:" << amplitude << "\n";
  return amplitude;


}

float Sinewave::getFrequency()
{
  std::cout << "Inside the Synthesizer getFrequency method.\n";
  std::cout << "synth frequenty is now set to:" << frequency << "\n";
  return frequency;

}
