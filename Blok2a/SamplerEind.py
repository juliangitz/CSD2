import simpleaudio as sa
import time
import random
import copy

#import samples
samples = [ sa.WaveObject.from_wave_file("/Users/julian/Desktop/samples/clap.wav"),
            sa.WaveObject.from_wave_file("/Users/julian/Desktop/samples/hat.wav"),
            sa.WaveObject.from_wave_file("/Users/julian/Desktop/samples/kick.wav"),]

#vraag om een getal voor je bpm
bpm = int(input ("voor bpm in:"))
print (bpm)

#bereken de duur van een kwart noot
kwartNoot = 60 / bpm
#bereken de duur van een 16e noot
zestiendeNoot = kwartNoot / 4.0
#hoeveel beats per sequence (time signature: 3 / 4 = 3 beats per sequence)
maatSoort = 5
#calculate the duration of a measure
maatDuur = maatSoort  * kwartNoot


#maak een lijst voor de drum sequence
events = []
#create lists with the moments (in 16th) at which we should play the samples
sequence1 = [0, 2, 4, 8, 11]
sequence2 = [3, 6, 10]
sequence3 = [9, 13]

#maak van de 16e noots sequence een eventlist met tijd waardes
for sixteenNoteIndex in sequence1:
  events.append([sixteenNoteIndex * zestiendeNoot, 0])

#maak van de 16e noots sequence een eventlist met tijd waardes
for sixteenNoteIndex in sequence2:
  events.append([sixteenNoteIndex * zestiendeNoot, 1])

#maak van de 16e noots sequence een eventlist met tijd waardes
for sixteenNoteIndex in sequence3:
  events.append([sixteenNoteIndex * zestiendeNoot, 2])

#NOTE: The line below is essential to enable a correct playback of the events
events.sort()

#print de event lijst
print(events)

#ontvang eerste event
#NOTE: pop(0) returns and removes the element at index 0
events2 = copy.copy(events)

events.extend(events2)


event = events.pop(0)
#retrieve the startime: current time
startTime = time.time()
keepPlaying = True
#play the sequence
while keepPlaying:
  #retrieve current time
  currentTime = time.time()
  #check if the event's time (which is at index 0 of event) is passed
  if(currentTime - startTime >= event[0]):
    #play sample -> sample index is at index 1
    samples[event[1]].play()
    #if there are events left in the events list
    if events:
      #retrieve the next event
      event = events.pop(0)
    else:
      #list is empty, stop loop
      keepPlaying = False
  else:
    #wait for a very short moment
    time.sleep(0.001)
