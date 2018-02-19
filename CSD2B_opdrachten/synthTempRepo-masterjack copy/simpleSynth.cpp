#include "simpleSynth.h"


SimpleSynth::SimpleSynth() : Synthesizer()
{
  std::cout << "Inside the SimpleSynth constructor.\n";
  oscilator = &sine;

}

SimpleSynth::~SimpleSynth()
{
  std::cout << "Inside the SimpleSynth destructor.\n";
}


void SimpleSynth::updatePitch(float pitch)
{

    oscilator->setFrequency(pitch);


}

//here you can choose whitch waveform you want to use
void SimpleSynth::setWaveType(int wavetype)
{

  switch (wavetype)
    {
      case 1:
      {

        oscilator = &sine;
        oscilator->setFrequency(getFrequency());
        oscilator->setPhase(0);
        break;


      }

      case 2:
      {

        oscilator = &square;
        oscilator->setFrequency(getFrequency());
        oscilator->setPhase(0);
        break;

      }

      case 3:
      {

        oscilator = &saw;

        oscilator->setFrequency(getFrequency());
        oscilator->setPhase(0);
        break;

      }

      case 4:
      {

        oscilator = &triangle;

        oscilator->setFrequency(getFrequency());
        oscilator->setPhase(0);
        break;

      }

      case 5:
      {

        oscilator = &noise;
        //oscilator->setFrequency(220);
        oscilator->setPhase(0);
        break;

      }
    }

}



void SimpleSynth::process(float *outputBuffer, int numFrames)
{

  for (int i=0; i <numFrames; i++) {

    outputBuffer[i] = oscilator->getSample();
    oscilator->tick();

  }

}
