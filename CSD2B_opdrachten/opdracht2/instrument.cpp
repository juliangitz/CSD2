#include <iostream>
#include "instrument.h"



instrument::instrument(int aantal, int pitch, std::string geluid, std::string instrumentsoort)

{
  //constructor
  this->aantal = aantal;
  this->pitch = pitch;
  this->geluid = geluid;
  this->instrumentsoort = instrumentsoort;
}

instrument::~instrument()
{
  //deconstructor
}


void instrument::speelSamen()
{
{

//check if the sound is between a normal pitch range
  if (pitch >200 && pitch <740 )
  {
    for (int i = 0; i<aantal; i++)
    {
//call play sound function
        speel();

    }

  }

}
}

void instrument::speel()
{
//the play sound function
    std::cout << "de " << instrumentsoort << " maakt een geluid dat klinkt als: " << geluid << ", met een frequency van " << pitch << "hz" << std::endl;

}
