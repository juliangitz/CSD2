hello: inst.o instrument.o
		g++ -o muziek instrument.o inst.o

instrumento: instrument.cpp
		g++ -c instrument.cpp

inst.o: inst.cpp
		g++ -c inst.cpp
