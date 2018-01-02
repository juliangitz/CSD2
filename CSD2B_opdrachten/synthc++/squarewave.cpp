#include "squarewave.h"



Squarewave::Squarewave() : s(0), Synthesizer()
{

  std::cout << "Inside the Squarewave constructor.\n";

}

Squarewave::~Squarewave()
{
  std::cout << "Inside the Sinewave destructor.\n";
}

float Squarewave::getSquarewave()
{
  nextS = s;
  std::cout << "freq is now:" << frequency << "\n";
  Output = sin(frequency * 2.0 * 3.14159 * nextS) > 0 ? 1.0 : -1.0;
  std::cout << "output is now:" << Output << "\n";
  nextS = s + 16;
  s = nextS;

  std::cout << "s is now:" << nextS << "\n";
  return Output;


}

void Squarewave::setFrequency(float frequency)
{

//  return Output * 0.5; // Master Volume
  this->frequency = frequency;

}

void Squarewave::setAmplitude(float amplitude)
{
  std::cout << "Inside the sinewave setAmplitude method.\n";

  this->amplitude = amplitude;
}

float Squarewave::getAmplitude()
{
  std::cout << "Inside the Sinewave getAmplitude method.\n";
  std::cout << "synth ampitude is now set to:" << amplitude << "\n";
  return amplitude;


}

float Squarewave::getFrequency()
{
  std::cout << "Inside the Synthesizer getFrequency method.\n";
  std::cout << "synth frequenty is now set to:" << frequency << "\n";
  return frequency;

}
