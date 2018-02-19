#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <iostream>
#include "oscilator.h"

using namespace std;

class Triangle : public Oscilator
{
public:
  Triangle();

  ~Triangle();

double getSample() override;

void setSample(double newSample);


};

#endif
