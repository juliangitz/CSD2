#include <iostream>

#ifndef _inst_
#define _inst_

class instrument
{
public:

  instrument(int aantal, int pitch);

  // deconstructer van instrument functie
  ~instrument();

  //void pianos(int aantal);
  //void playpiano(int n);
  //void pianogeluid();
  //void playtrompet(int n);
  //void trompetgeluid();
  void speel();
  void maak();
private:
  int  aantal, pitch;

};


#endif
