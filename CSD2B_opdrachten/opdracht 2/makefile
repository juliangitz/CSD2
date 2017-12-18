create: piano.o instrument_main.o trompet.o
	g++ -o geluid piano.o instrument_main.o trompet.o

instrument_main.o: instrument_main.cpp
	g++ -c instrument_main.cpp

instrument.o: piano.cpp instrument.h
	g++ -c piano.cpp

trompet.o: trompet.cpp trompet.h
	g++ -c trompet.cpp
