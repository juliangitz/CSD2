#ifndef _SQUARE_H_
#define _SQUARE_H_

#include <iostream>
#include "oscilator.h"

using namespace std;

class Squarewave : public Oscilator
{
public:
  Squarewave();

  ~Squarewave();

double getSample() override;

void setSample(double newSample);


};

#endif
