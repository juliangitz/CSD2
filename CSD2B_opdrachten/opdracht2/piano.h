#include "instrument.h"

class Piano : public instrument

{
public:

  Piano(int aantal, int pitch);
  ~Piano();
  void speel();
  void maak();

private:
  int  aantal, pitch;
};
