#include "inst.h"

void Instrument::makesounds(int n) {
  for (int i = 0; i<n; i++)
  {
    makesound();
  }

}

void Instrument::andergeluidje(int n) {
  for (int i = 0; i<n; i++)
  {
    andergeluid();
  }

}

void Instrument::makesound() {
  std::cout << "boem" << std::endl;
}
void Instrument::andergeluid() {
  std::cout << "bam" << std::endl;
}
