#include <iostream>
#include "piano.h"



Piano::Piano(int aantal, int pitch) : instrument(aantal, pitch, std::string(), std::string() )
{
  geluid = "ping";
  instrumentsoort= "piano";
//  std::cout << "inside piano" << pitch << "hz" << std::endl;

}

Piano::~Piano()
{

}
