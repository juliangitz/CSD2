#include <iostream>

#include "trompet.h"

Trumpet::Trumpet(int aantal, int pitch) : instrument(aantal, pitch, std::string(), std::string())
{

  geluid = "pweep";
  instrumentsoort= "trompet";
  //std::cout << "inside trompet" << pitch << "hz" << std::endl;

}

Trumpet::~Trumpet()
{

}
