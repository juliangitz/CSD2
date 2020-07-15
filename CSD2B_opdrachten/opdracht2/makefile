geluid: piano.o instrument_main.o perc.o instrument.o
	g++ -o geluid instrument.o instrument_main.o perc.o piano.o

instrument_main.o: instrument_main.cpp
	g++ -c instrument_main.cpp

instrument.o: instrument.cpp instrument.h
	g++ -c instrument.cpp

trompet.o: perc.cpp perc.h
	g++ -c perc.cpp

piano.o: piano.cpp piano.h
	g++ -c piano.cpp

clean:
	rm -f *.o
	rm -f geluid
