
#include "oscilator.h"



Oscilator::Oscilator()
{
    std::cout << "Inside the oscilator conructor.\n";

}

Oscilator::~Oscilator()
{
  std::cout << "Inside the oscilator destructor.\n";
}


void Oscilator::tick()
{

  phase = phase + 16;
}


void Oscilator::setSample(double newSample)
{
  sample = newSample;
}




void Oscilator::setFrequency(float frequency)
{

  this->frequency = frequency;
}

float Oscilator::getFrequency()
{
  //  Output2 = sin(20 * getPhase() * 3.1415 * 2);
  //  frequency = Output2 * frequency;
  return frequency;
}



void Oscilator::setPhase(double phase)
{
  this->phase = phase;
}


double Oscilator::getPhase()
{
  return phase;
}

void Oscilator::setAmplitude(double amplitude)
{
  this->amplitude = amplitude;
}

double Oscilator::getAmplitude()
{
  return amplitude;
}
