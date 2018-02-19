#ifndef _SAW_H_
#define _SAW_H_

#include <iostream>
#include "oscilator.h"

using namespace std;

class SawWave : public Oscilator
{
public:
  SawWave();

  ~SawWave();

double getSample() override;

void setSample(double newSample);


};

#endif
