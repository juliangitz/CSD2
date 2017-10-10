# todo play sound

import simpleaudio as sa
from time import sleep
wave_obj1 = sa.WaveObject.from_wave_file("/Users/julian/Desktop/Ac_K.wav")
wave_obj2 = sa.WaveObject.from_wave_file("/Users/julian/Desktop/LadClp.wav")
wave_obj3 = sa.WaveObject.from_wave_file("/Users/julian/Desktop/Aki_H2.wav")

lst = ["1", "3", "2", "3","1", "1", "2", "3" ];

for item in lst:
    print("The current item is:",item)



for hit in lst:
    if hit == "1":
        print("bam")
        play_obj = wave_obj1.play()
        sleep(0.5)
        continue
    if hit == "2":
        print ("clap")
        play_obj = wave_obj2.play()
        sleep(0.5)
        continue
    if hit == "0":
        print ("wait")
        sleep(1)
        continue
    if hit == "3":
        print ("Hihat")
        play_obj = wave_obj3.play()
        sleep(0.5)
        continue

#for pause in lst:
#    if pause == "0":
#        sleep(1)

#else:
#    print("0")
#    sleep(1)






##if [1] print ("playing first object")
##play_obj = wave_obj1.play()

#print ("waiting for next object")

#print ("loading first object")

#print ("playing first object")
#play_obj = wave_obj1.play()

#print ("waiting for next object")

#sleep(3)

#print ("sleep done")

#print ("playing second object")
#play_obj = wave_obj2.play()
#play_obj.wait_done()
