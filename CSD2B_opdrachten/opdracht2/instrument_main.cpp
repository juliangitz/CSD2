#include <iostream>
#include "instrument.h"
#include "perc.h"
#include "piano.h"

int main() {
//Instantieer instrumenten
Piano steinwayPiano(4,540, "ping", "steinwayPiano");
Percussion Trommel(2,400, "Pof", "Djembe");

 //------------------- PIANO
 cout << "de piano functies: " << endl;

 //speel piano noot
 steinwayPiano.speel();

 //verander piano pitch
 steinwayPiano.note(750);
 steinwayPiano.speel();

 //Speel piano akkoord
 steinwayPiano.speelAkoord(450,4);

 //------------------- Trommel
 cout << "de trommel functies: " << endl;
 // trommel met een open aanslag
 Trommel.Aanslag(0);
 Trommel.speel();


 // trommel met een gedempte aanslag
 Trommel.Aanslag(1);
 Trommel.speel();



 //verander trommel klank
 Trommel.klank("boem");

 // trommel met een gedempte aanslag
 Trommel.speel();

 //------------------- Samenspel van instrumenten
 cout << "de instrumenten speelen samen: " << endl;

 steinwayPiano.speelSamen();
 Trommel.speelSamen();

return 0;
};
