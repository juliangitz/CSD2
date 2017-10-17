import simpleaudio as sa
import time
import random

#set bpm
bpm = 80
#calculate beatDuration with bpm
beatDuration = 60 / bpm
beatDuration2 = 60 / bpm
#number of beats per sequence (time signature: 3 / 4 = 3 beats per sequence)
beatsPerSequence = 4
beatsPerSequence2 = 6
#number of steps per beat (4 steps per beat -> using sixteenth notes)
stepsPerBeat = 2
stepsPerBeat2 = 3
#calculate stepDuration
stepDuration = beatDuration / stepsPerBeat
stepduration2 = beatDuration2 / stepsPerBeat2

print (stepDuration)
print (stepduration2)



#calculate number of steps per sequence
stepsPerSequence = stepsPerBeat * beatsPerSequence
stepsPerSequence2 = stepsPerBeat2 * beatsPerSequence2

print (stepsPerSequence)
print (stepsPerSequence2)

sequence = [0, 8, 12]

event = sequence.pop(0)
#play the sequence
for step in range(int(stepsPerSequence)):


  print("Current step: ", step)
  print("Current event: ", event)
  #if(step == event):

    #retrieve the next event
    event = sequence.pop(0)
    
for step in range(int(stepsPerSequence2)):
    print("Current step: ", step)
    print("Current event: ", event)

    #retrieve the next event
    event = sequence.pop(0)



  #wait!
  time.sleep(stepDuration)
