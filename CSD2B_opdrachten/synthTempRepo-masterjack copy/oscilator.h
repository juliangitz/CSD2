#ifndef _OCSILATOR_H_
#define _OCSILATOR_H_

#include <iostream>
#include <cmath>

//set pi function
#define PI_2 6.28318530717959

using namespace std;


class Oscilator
{
public:
  //constructor
  Oscilator();
  //Oscilator(double frequency);
  ~Oscilator();

  //void setSample(double newSample);
  virtual double getSample() = 0;

  //tick function?
  void tick();

  void setFrequency(float frequency);
  float getFrequency();



//getters & setters

  void setPhase(double phase);
  double getPhase();

  void setAmplitude(double amplitude);
  double getAmplitude();



  void setSample(double newSample);

protected:


  double sample;
  double samplerate;
  double Output;
  double Output1;
  double Output2;
  double phase;
  double amplitude;
  float frequency;



};

#endif
