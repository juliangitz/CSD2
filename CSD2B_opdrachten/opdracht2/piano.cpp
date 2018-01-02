#include <iostream>
#include "piano.h"



Piano::Piano(int aantal, int pitch) : instrument(aantal, pitch)
{
  this->aantal = aantal;
  this->pitch = pitch;
}

Piano::~Piano()
{

}


void Piano::maak()
{
  {
    for (int i = 0; i<aantal; i++)
      {
        speel();
      }

  }
}
void Piano::speel()
{

  std::cout << "piano, pling" << ", " << pitch << "hz" << std::endl;

}
