#include "instrument.h"

class instrument2 : public instrument

{
public:

  instrument2(int aantal, int pitch);
  ~instrument2();
  void speel();
  void maak();

private:
  int  aantal, pitch;
};
