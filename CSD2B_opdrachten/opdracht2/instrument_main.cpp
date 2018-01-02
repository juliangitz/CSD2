#include <iostream>
#include "instrument.h"
#include "trompet.h"
#include "piano.h"
int main()
{

  Piano piano(4,440);
  piano.maak();
  Trumpet trompet(2, 220);
  trompet.maak();

  return 0;

  
};
