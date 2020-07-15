#include <iostream>
#include "instrument.h"

instrument::instrument(int aantal, int pitch, string geluid, string instrumentsoort) {
  //constructor
  this->aantal = aantal;
  this->pitch = pitch;
  this->geluid = geluid;
  this->instrumentsoort = instrumentsoort;
}

void instrument::speelSamen() {
 for (int i = 0; i<aantal; i++)
  {
   speel();
  }
}

void instrument::speel() {
  //de instrument speel functie
  cout << "de " << instrumentsoort << " maakt een geluid dat klinkt als: " << geluid << ", met een frequency van " << pitch << "hz" << endl;
}

instrument::~instrument() {
  //deconstructor
}
