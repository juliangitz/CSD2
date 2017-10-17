import simpleaudio as sa
import time
import random
import copy

#import samples
samples = [ sa.WaveObject.from_wave_file("/Users/julian/Desktop/samples/clap.wav"),
            sa.WaveObject.from_wave_file("/Users/julian/Desktop/samples/hat.wav"),
            sa.WaveObject.from_wave_file("/Users/julian/Desktop/samples/kick.wav"),]

print (samples)


#set bpm
bpm = int(input ("voor bpm in:"))
print (bpm)


#calculate beatDuration with bpm
beatDuration = 60 / bpm

print (beatDuration)
#number of beats per sequence (time signature: 3 / 4 = 3 beats per sequence)
beatsPerSequence = 3
#number of steps per beat (4 steps per beat -> using sixteenth notes)
stepsPerBeat = 5
#calculate stepDuration
stepDuration = beatDuration / stepsPerBeat
#calculate number of steps per sequence
stepsPerSequence = stepsPerBeat * beatsPerSequence

print (stepsPerSequence)



##create a list with a rhythm: the steps at which the sample will be played
sequence = [0, 2, 4, 8, 11]

sequence1 = copy.copy(sequence)

sequence.extend(sequence + sequence1)

print (sequence)

event = sequence.pop(0)
#play the sequence
for step in range(int(stepsPerSequence)):
  print("Current step: ", step)
  if(step == event):
    samples[0].play()

    #retrieve the next event
    event = sequence.pop(0)


  #wait!
  time.sleep(stepDuration)
