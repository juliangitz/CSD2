#include "sinewave.h"



//constructor
Sinewave::Sinewave() : Oscilator()
{

  std::cout << "Inside the Sinewave constructor.\n";

}

//deconstructor
Sinewave::~Sinewave()
{
  std::cout << "Inside the Sinewave destructor.\n";
}


double Sinewave::getSample()
{
  //Output2 = sin(20 * getPhase() * 3.1415 * 2);
  Output = sin(getFrequency() * getPhase() * 3.1415 * 2);
// Output2 = sin(200 * getPhase() * 3.1415 * 2);
//  Output = Output1 * Output2;
//  std::cout << Output << std::endl;
  return Output;

}
