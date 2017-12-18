#include <iostream>
#include "instrument.h"
#include "trompet.h"

int main()
{

  instrument piano(4,440);
  piano.maak();
  instrument2 trompet(2, 220);
  trompet.maak();
  //piano.speel();
  //piano.pianos(3);
  return 0;

  //Instrument piano;
  //Instrument trompet;

  //piano.playpiano(5);
  //trompet.playtrompet(3);
};
