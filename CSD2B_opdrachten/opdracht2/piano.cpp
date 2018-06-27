#include <iostream>
#include "piano.h"



Piano::Piano(int aantal, int pitch, std::string geluid, std::string instrumentsoort) : instrument(aantal, pitch, geluid, instrumentsoort)
{
  geluid = "geluid";
  instrumentsoort= "instrumentsoort";

}

Piano::~Piano()
{

}
