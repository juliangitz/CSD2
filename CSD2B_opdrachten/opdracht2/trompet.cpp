#include "trompet.h"

Trumpet::Trumpet(int aantal, int pitch) : instrument(aantal, pitch)
{
  this->aantal = aantal;
  this->pitch = pitch;
}

Trumpet::~Trumpet()
{

}

void Trumpet::maak()
{
  {
    for (int i = 0; i<aantal; i++)
      {
        speel();
      }
  }
}

void Trumpet::speel()
{
  std::cout << "trompet, pweep" << ", " << pitch << "hz" << std::endl;
}
