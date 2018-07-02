create: piano.o instrument_main.o trompet.o instrument.o
	g++ -o geluid instrument.o instrument_main.o trompet.o piano.o

instrument_main.o: instrument_main.cpp
	g++ -c instrument_main.cpp

instrument.o: instrument.cpp instrument.h
	g++ -c instrument.cpp

trompet.o: trompet.cpp trompet.h
	g++ -c trompet.cpp

piano.o: piano.cpp piano.h
	g++ -c piano.cpp

clean:
	rm -f *.o
	rm -f geluid
