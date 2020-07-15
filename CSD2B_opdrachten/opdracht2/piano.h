#include "instrument.h"

using namespace std;

class Piano : public instrument {
 public:
  Piano(int aantal, int pitch, string geluid, string instrumentsoort);
  void note(int pitch);

  void speelAkoord(int grondtoon, int HoeveelNoten);

  ~Piano();

 private:
   int VolgendeNoot;

};
