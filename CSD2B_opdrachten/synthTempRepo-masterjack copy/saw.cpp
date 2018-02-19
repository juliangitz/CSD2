#include "saw.h"


SawWave::SawWave() : Oscilator()
{

}


SawWave::~SawWave()
{

}

double SawWave::getSample()
{

  Output = 0.0;

  for (double n = 1.0; n < 40.0; n++)

  			Output += (sin(n * getFrequency() * getPhase() * 3.14159 * 2)) / n ;

      //  dOutput = dOutput * ( 3.14159 * 2);

      //  Output = dOutput;



  //Output = sin(getFrequency() * getPhase() * 3.14159 * 2) > 0 ? 1.0 : -1.0;

  return Output;


}
