#include <iostream>
#include "instrument.h"
#include "trompet.h"
#include "piano.h"
int main()
{

//define number of instances, pitch, sound and type of instrument
  Piano steinwayPiano(4,540, "ping", "steinwayPiano");
  Trumpet goudeTrompet(2, 450, "pweep", "goudeTrompet");


  std::cout<<"speel los instrument: "<<std::endl;
  goudeTrompet.speel();
  steinwayPiano.speel();
  
  std::cout<<"instrumenten spelen samen: "<<std::endl;
  goudeTrompet.speelSamen();
  steinwayPiano.speelSamen();
  return 0;


};
