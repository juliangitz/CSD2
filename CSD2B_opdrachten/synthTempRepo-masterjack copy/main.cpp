#include <iostream>
#include <thread>
#include "synthesizer.h"
#include "simpleSynth.h"
#include "sinewave.h"
#include "jack_module.h"
//for the key presses
#include <stdio.h>
// for the octave divided in a western way

//TODO: ik heb het octaaf afgerond op hele nummers omdat hij geen . in de floar wou pakken

float freqout = 0.0;
float octavebass = 110.0; //A2
float scale = pow(2.0, 1.0 /12.0);

using namespace std;
int main(int argc,char **argv)
{

  cout << "making a SimpleSynth object\n";

  SimpleSynth synth;


  int freq;

  synth.setFrequency(110);



  cout << "wavetypes: " << endl;
  cout << "sinewave = 1" << endl;
  cout << "squarewave = 2" << endl;
  cout << "sawwave = 3" << endl;
  cout << "trianglewave = 4" << endl;
  cout << "noise = 5" << endl;


  int wave;
  cout << "enter wavetype:" << endl;
  cin >> wave;
  synth.setWaveType(wave);






  JackModule jack;


//jack procces callback to jack module
  jack.onProcess = [&synth](jack_default_audio_sample_t *inBuf,
     jack_default_audio_sample_t *outBuf, jack_nframes_t nframes) {
    synth.process(outBuf, nframes);

    return 0;
  };


jack.init("julian");
jack.autoConnect();

std::cout << "press 'w' to change the waveform." << endl;
std::cout << "press 'e' to change the frequenty." << endl;
std::cout << "\n\nPress 'q' when you want to quit the program.\n";

wcout << endl <<
"|   |   |   |   |   | |   |   |   |   | |   | |   |   |   |" << endl <<
		"|   | S |   |   | F | | G |   |   | J | | K | | L |   |   |" << endl <<
		"|   |___|   |   |___| |___|   |   |___| |___| |___|   |   |__" << endl <<
		"|     |     |     |     |     |     |     |     |     |     |" << endl <<
		"|  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |" << endl <<
		"|_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|" << endl << endl;


bool running = true;
while (running)
{


    //add a keyboard




/*
      switch (std::cin.get())
      {

          case 'q':
            running = false;
            break;
          case 'w':
            cout << "enter wavetype:" << endl;
            cin >> wave;
            synth.setWaveType(wave);
            break;
          case 'e':
          cout << "enter frequenty: " << endl;
          cin >> freq;
          synth.updatePitch(freq);
          break;
          case 't':
          {
*/
        //  bool keyboard = true;
      //   while (keyboard)

  system("stty raw");
  char input = getchar();

  if (input == '1')
  {


    synth.setWaveType(1);
    system("stty cooked");

  }
  if (input == '2')
  {


    synth.setWaveType(2);
    system("stty cooked");

  }

  if (input == '3')
  {


    synth.setWaveType(3);
    system("stty cooked");

  }

  if (input == '4')
  {


    synth.setWaveType(4);
    system("stty cooked");

  }

  if (input == '5')
  {


    synth.setWaveType(5);
    system("stty cooked");

  }






  if (input == 'w')
  {

    cout << "enter wavetype:" << endl;
    cin >> wave;
    synth.setWaveType(wave);
    system("stty cooked");

  }

  if (input == 'e')
  {

  //  cout << "you pressed: " << input << endl;
    cout << "enter frequenty: " << endl;
    cin >> freq;
    synth.updatePitch(freq);
    system("stty cooked");
  }




  //____________________________KEYBOARD PIANO
  if (input == 'z')
  {

    //cout << "--" << input << "--";
    //cout << input <<endl;
    freqout = octavebass * pow(scale, 1);
  //  cout << freqout <<endl;
    synth.updatePitch( round (freqout));
    system("stty cooked");
//    cout << freqout <<endl;
  }
  if (input == 's')
  {

    freqout = octavebass * pow(scale, 2);
    synth.updatePitch(round (freqout) );
    system("stty cooked");
  }
  if (input == 'x')
  {


    freqout = octavebass * pow(scale, 3);
    //cout << freqout <<endl;
    synth.updatePitch(round (freqout) );
    system("stty cooked");
  }
  if (input == 'c')
  {


    freqout = octavebass * pow(scale, 4);

    synth.updatePitch(round (freqout) );
    system("stty cooked");
  }

  if (input == 'f')
  {

    freqout = octavebass * pow(scale, 5);

    synth.updatePitch(round (freqout) );
    system("stty cooked");
  }

  if (input == 'v')
  {

    freqout = octavebass * pow(scale, 6);

    synth.updatePitch(round (freqout) );
    system("stty cooked");
  }
  if (input == 'g')
  {

    freqout = octavebass * pow(scale, 7);

    synth.updatePitch(round (freqout) );
    system("stty cooked");
  }
  if (input == 'b')
  {

    freqout = octavebass * pow(scale, 8);

    synth.updatePitch(round (freqout) );
    system("stty cooked");
  }
  if (input == 'n')
  {


    freqout = octavebass * pow(scale, 9);

    synth.updatePitch(round (freqout) );
    system("stty cooked");

  }
  if (input == 'j')
  {


    freqout = octavebass * pow(scale, 10);

    synth.updatePitch(round (freqout) );
    system("stty cooked");

  }
  if (input == 'm')
  {


    freqout = octavebass * pow(scale, 11);

    synth.updatePitch(round (freqout) );
    system("stty cooked");

  }
  if (input == 'k')
  {


    freqout = octavebass * pow(scale, 12);

    synth.updatePitch(round (freqout) );
    system("stty cooked");

  }
  cout << input <<endl;

  if (input == 'q')
  {
  // Reset terminal to normal "cooked" mode
  system("stty cooked");
  running = false;

  }

}

  return 0;

}
