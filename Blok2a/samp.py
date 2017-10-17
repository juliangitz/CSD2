import simpleaudio as sa
import time
import random

"""
An example project in which a sequence (one measure, one sample) is played.
  - One meassure, time signature: 3 / 4
  - 3 * 4 sixteenth notes per measure = 12 'steps'

------ HANDS-ON TIPS ------
- Run the code, read the code and answer the following question:
  This script does not use a list with time intervals, but does play a rhythm
  with one sample. Explain how.

- Alter the code:
  Fix the bug that occurs: "IndexError: pop from empty list"
"""

#load 1 audioFile and store it into a list
#note: using a list taking the next step into account: using multiple samples
samples = [ sa.WaveObject.from_wave_file("/Users/julian/Desktop/samples/clap.wav"),
            sa.WaveObject.from_wave_file("/Users/julian/Desktop/samples/hat.wav"),
            sa.WaveObject.from_wave_file("/Users/julian/Desktop/samples/kick.wav"),]

#vraag om een getal voor je bpm
bpm = int(input ("voor bpm in:"))
print (bpm)

#calculate beatDuration with bpm
beatDuration = 60 / bpm
#number of beats per sequence (time signature: 3 / 4 = 3 beats per sequence)
beatsPerSequence = 6
#number of steps per beat (4 steps per beat -> using sixteenth notes)
stepsPerBeat = 7
#calculate stepDuration
stepDuration = beatDuration / stepsPerBeat
#calculate number of steps per sequence
stepsPerSequence = stepsPerBeat * beatsPerSequence



#create a list with a rhythm: the steps at which the sample will be played
sequence = [12]
clap =[0,6,10]



event = sequence.pop(0)
event = sequence.pop(0)
#play the sequence
for step in range(int(stepsPerSequence)):
  print("Current step: ", step)
  print("Current event: ", event)
  if(step == event):
    samples[0].play()


    #retrieve the next event
    event = sequence.pop(0)



  #wait!
  time.sleep(stepDuration)
