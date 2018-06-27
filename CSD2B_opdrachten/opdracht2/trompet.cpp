#include <iostream>

#include "trompet.h"

Trumpet::Trumpet(int aantal, int pitch, std::string geluid, std::string instrumentsoort) : instrument(aantal, pitch, geluid, instrumentsoort)
{

  geluid = "geluid";
  instrumentsoort= "instrumentsoort";

}

Trumpet::~Trumpet()
{

}
