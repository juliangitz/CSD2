#include <iostream>
#include "instrument.h"



instrument::instrument(int aantal, int pitch, std::string geluid, std::string instrumentsoort)
{
  this->aantal = aantal;
  this->pitch = pitch;
  //geluid= geluid;
  //instrumentsoort= instrumentsoort;


}

instrument::~instrument()
{

}


void instrument::maak()
{
  {

  if (instrumentsoort == "piano" && pitch >200 && pitch <740 )
  {
    for (int i = 0; i<aantal; i++)
    {

        speel();

    }

}



  if (instrumentsoort == "trompet" && pitch >200 && pitch <610)
  {
    for (int i = 0; i<aantal; i++)
    {

        speel();
    }
  }






  }


}
void instrument::speel()
{


    std::cout << "inside " << instrumentsoort << " speel" << std::endl;
    std::cout << geluid << ", " << pitch << "hz" << std::endl;


}
