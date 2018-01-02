#include "oscilator.h"
#include "sinewave.h"
#include "squarewave.h"


Oscilator::Oscilator() : Synthesizer()
{



  int waveType = 1;
  Sinewave sinewave;
  Squarewave squarewave;


  freq = 540;
  amp = 1.2;



  sinewave.setFrequency(freq);
  sinewave.setAmplitude(amp);
  sinewave.getAmplitude();
  sinewave.getFrequency();

  squarewave.setFrequency(freq);
  squarewave.setAmplitude(amp);
  squarewave.getAmplitude();
  squarewave.getFrequency();

  std::cout << "Inside the oscilator constructor.\n";
//interval(1 / 44100)
  std::chrono::seconds interval(1); // 1 seconds
  for( int i = 0 ; i < 2; ++i )
  {
  //waveType = 1;

  switch (waveType)
    {
    case 1:
    {
      //for( int i = 0 ; i < 5; ++i )
      sinewave.getSinewave();
      break;
      //std::this_thread::sleep_for( interval ) ;

    }

    case 2:
    {
      //for( int i = 0 ; i < 5; ++i )
      squarewave.getSquarewave();
      break;
      //std::this_thread::sleep_for( interval ) ;
    }


  //  default:
  //    return 0.0;

    }


  std::this_thread::sleep_for( interval ) ;

  }

}
Oscilator::~Oscilator()
{
  std::cout << "Inside the oscilator destructor.\n";

}
