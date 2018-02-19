#include "noise.h"


Noise::Noise() : Oscilator()
{

}


Noise::~Noise()
{

}

double Noise::getSample()
{

  //Output = sin(getFrequency() * getPhase() * 3.14159 * 2) > 0 ? 1.0 : -1.0;
  Output = 2.0 * ((double)rand() / (double)RAND_MAX) - 1.0;
  return Output;


}
