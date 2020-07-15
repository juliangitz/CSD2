#include <iostream>
#include "perc.h"

using namespace std;

//als aanslagstaat nog niet gedefineerd is, word hier een initiele staat mee gegeven
string aanslagStaat = "een open klinkende ";


Percussion::Percussion(int aantal,int pitch, string geluid, string instrumentsoort) : instrument(aantal, pitch, geluid, instrumentsoort) {
  geluid = "geluid";
  instrumentsoort= "instrumentsoort";
}

void Percussion::klank(string geluid) {
 // nieuwgeluid slaat de huidige geluids string op in de subclass
 this-> Nieuwgeluid = geluid;
 this->geluid = aanslagStaat + geluid;
 cout <<instrumentsoort << "geluid klinkt nu als: " << geluid << endl;
}

void Percussion::Aanslag(bool Aanslag) {

Nieuwgeluid =  geluid;
if (Aanslag == 0) {
  open = "een open klinkende ";
  this->geluid = open + Nieuwgeluid;
  //bewaar aanslag staat voor volgende aanslag
  aanslagStaat = open;
 }

if (Aanslag == 1){
  closed = "een Gedempte ";
  this->geluid = closed + Nieuwgeluid;
  //bewaar aanslag staat voor volgende aanslag
  aanslagStaat = closed;
 }
}

Percussion::~Percussion() {}
