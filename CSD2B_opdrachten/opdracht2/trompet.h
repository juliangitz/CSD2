#include "instrument.h"

class Trumpet : public instrument

{
public:

  Trumpet(int aantal, int pitch);
  ~Trumpet();
  void speel();
  void maak();

private:
  int  aantal, pitch;
};
