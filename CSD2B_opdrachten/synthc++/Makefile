CC = g++

synth : synthesizer.o simpleSynth.o main.o oscilator.o sinewave.o squarewave.o
	$(CC) -o synth synthesizer.o simpleSynth.o main.o oscilator.o sinewave.o squarewave.o

main.o:
	$(CC) -c main.cpp

synthesizer.o:
		$(CC) -c synthesizer.cpp

simpleSynth.o:
		$(CC) -c simpleSynth.cpp

oscilator.o:
		$(CC) -c oscilator.cpp

sinewave.o:
		$(CC) -c sinewave.cpp

squarewave.o:
		$(CC) -c squarewave.cpp


clean:
	rm -f *.o
	rm -f synth
