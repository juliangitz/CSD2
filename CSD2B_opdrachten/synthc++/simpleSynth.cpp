#include "simpleSynth.h"
#include "oscilator.h"


SimpleSynth::SimpleSynth() : Synthesizer()
{

  std::cout << "Inside the SimpleSynth constructor.\n";
  //Oscilator::Oscilator(1);
  //  type = 1;
  //  waveType = type;


}

SimpleSynth::~SimpleSynth()
{
  std::cout << "Inside the SimpleSynth destructor.\n";
}



//TODO: this does not work yet
void SimpleSynth::process(void* outputBuffer, int numFrames, int samplerate)
{
  std::cout << "Inside the SimpleSynth process method.\n";

  //Oscilator::oscilator();


}
