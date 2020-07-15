#include <iostream>
#include <string>

using namespace std;

#ifndef _inst_
#define _inst_

class instrument {
 public:
  instrument(int aantal, int pitch, string geluid, string instrumentsoort);
  ~instrument();

  void speel();
  void speelSamen();

  string geluid, instrumentsoort;
  int pitch;

 private:
  int  aantal;

};


#endif
