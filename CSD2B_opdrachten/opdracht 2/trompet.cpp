#include "trompet.h"

instrument2::instrument2(int aantal, int pitch) : instrument(aantal, pitch)
{
  //std::cout << "maak de trompet" << std::endl;
  this->aantal = aantal;
  this->pitch = pitch;
}

instrument2::~instrument2()
{
  //std::cout << "Destructor van trompet" << std::endl;

}

void instrument2::maak()
{
  //std::cout << "piano " << aantal << "," << pitch << std::endl;
  {
    for (int i = 0; i<aantal; i++)
      {
        speel();
      }

  }
}

void instrument2::speel()
{
  //maak();
  std::cout << "trompet, pweep" << ", " << pitch << "hz" << std::endl;


}
