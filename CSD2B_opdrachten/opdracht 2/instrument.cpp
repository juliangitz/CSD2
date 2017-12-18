#include "instrument.h"

void Instrument::playpiano(int n) {

  for (int i = 0; i<n; i++)
  {
    pianogeluid();
  }

}

void Instrument::playtrompet(int n) {

  for (int i = 0; i<n; i++)
  {
    trompetgeluid();
  }

}

void Instrument::pianogeluid() {
  std::cout << "pling" << std::endl;
}


void Instrument::trompetgeluid() {
  std::cout << "pweeep" << std::endl;
}
