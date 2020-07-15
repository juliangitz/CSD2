#include "instrument.h"

using namespace std;

class Percussion : public instrument {
 public:
  Percussion(int aantal,int pitch, string geluid, string instrumentsoort);
  ~Percussion();

  void klank(string geluid);
  void Aanslag(bool Aanslag);

 private:
  string open;
  string closed;
  string Nieuwgeluid;
  string aanslagStaat;
};
