#ifndef _NOISE_H_
#define _NOISE_H_

#include <iostream>
#include "oscilator.h"

using namespace std;

class Noise : public Oscilator
{
public:
  Noise();

  ~Noise();

double getSample() override;

void setSample(double newSample);


};

#endif
