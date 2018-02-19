#ifndef _SINEWAVE_H_
#define _SINEWAVE_H_


#include <iostream>
#include "oscilator.h"

using namespace std;

class Sinewave : public Oscilator
{
public:
  //constructor

  Sinewave();
  //deconstructor
  ~Sinewave();


double getSample() override;


void setSample(double newSample);


};



#endif
