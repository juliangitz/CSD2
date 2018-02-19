#include "squarewave.h"


Squarewave::Squarewave() : Oscilator()
{

}


Squarewave::~Squarewave()
{

}

double Squarewave::getSample()
{

  Output = sin(getFrequency() * getPhase() * 3.14159 * 2) > 0 ? 1.0 : -1.0;

  return Output;


}
