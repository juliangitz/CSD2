CC = g++
CFLAGS = -I/usr/local/include -Wall -std=c++1z
LDFLAGS= -ljack


go : synthesizer.o simpleSynth.o main.o oscilator.o sinewave.o jack_module.o squarewave.o noise.o saw.o triangle.o
	$(CC) -o $@ $(CFLAGS) synthesizer.o simpleSynth.o main.o oscilator.o sinewave.o jack_module.o squarewave.o noise.o saw.o triangle.o $(LDFLAGS)

.cpp.o:
	$(CC) -c $< $(CFLAGS)




clean:
	rm -f *.o
	rm -f go
