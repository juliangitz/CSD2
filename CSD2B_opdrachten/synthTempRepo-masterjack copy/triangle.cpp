#include "triangle.h"


Triangle::Triangle() : Oscilator()
{

}


Triangle::~Triangle()
{

}

double Triangle::getSample()
{

  //Output = sin(getFrequency() * getPhase() * 3.14159 * 2) > 0 ? 1.0 : -1.0;
  Output = asin(sin(getFrequency() * getPhase() * 3.14159 * 2));
  return Output;


}
