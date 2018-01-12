#include <iostream>
#include "instrument.h"
#include "trompet.h"
#include "piano.h"
int main()
{

  Piano steinwayPiano(4,540);
  steinwayPiano.maak();
  Trumpet goudeTrompet(2, 220);
  goudeTrompet.maak();

  return 0;


};
