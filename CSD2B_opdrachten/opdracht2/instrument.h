#include <iostream>

#ifndef _inst_
#define _inst_

class instrument
{
public:

  instrument(int aantal, int pitch);


  ~instrument();


  void speel();
  void maak();
private:
  int  aantal, pitch;

};


#endif
