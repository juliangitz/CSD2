#include <iostream>
#include "piano.h"

using namespace std;

Piano::Piano(int aantal, int pitch, string geluid, string instrumentsoort) : instrument(aantal, pitch, geluid, instrumentsoort) {
  pitch = pitch;
  geluid = "geluid";
  instrumentsoort= "instrumentsoort";
}

void Piano::note(int key) {
this->pitch = key;
}

void Piano::speelAkoord(int grondtoon, int HoeveelNoten) {
 cout << "de Piano speelt een akoort: " << endl;

 VolgendeNoot = grondtoon;
 HoeveelNoten -= 1;
 //speel grond toon voor het akkoord
 Piano::note(grondtoon);
 instrument::speel();

  for (int i = 0; i<HoeveelNoten ; i++) {
    //+ x om de frequentie van de toon te verhogen
   VolgendeNoot += 55;
   Piano::note(VolgendeNoot);
   instrument::speel();
 }
 //zet piano FQ weer terug naar de grondtoon voor de volgede keer dat de functie word aangeroepen
 Piano::note(grondtoon);
}

Piano::~Piano() {}
