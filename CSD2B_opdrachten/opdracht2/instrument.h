#include <iostream>
#include <string>

#ifndef _inst_
#define _inst_

class instrument
{
public:

  instrument(int aantal, int pitch, std::string geluid, std::string instrumentsoort);


  ~instrument();


  void speel();
  void maak();
  std::string geluid;
  std::string instrumentsoort;
private:
  int  aantal, pitch;


};


#endif
