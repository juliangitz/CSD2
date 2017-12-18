#include <iostream>
#include "instrument.h"



instrument::instrument(int aantal, int pitch)
{
  //std::cout << "maak de piano" << std::endl;

  //for (int i = 0; i<aantal; i++)
  //{
  //  speel();
  //}

  //this->pitch = pitch;
  this->aantal = aantal;
  this->pitch = pitch;
}

instrument::~instrument()
{
  //std::cout << "Destructor van piano" << std::endl;

}

//void instrument::instrument(int aantal, int pitch) {

//  for (int i = 0; i<aantal; i++)
//  {
//    speel();
//  }

//}
void instrument::maak()
{
  //std::cout << "piano " << aantal << "," << pitch << std::endl;
  {
    for (int i = 0; i<aantal; i++)
      {
        speel();
      }

  }
}
void instrument::speel()
{
  //maak();
  std::cout << "piano, pling" << ", " << pitch << "hz" << std::endl;


}
