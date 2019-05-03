all:	arrayTutorial

arrayTutorial:	arrayTutorial.o
	g++ -o arrayTutorial arrayTutorial.o

arrayTutorial.o:	arrayTutorial.cpp
	g++ -c -std=c++11 arrayTutorial.cpp

clean:
	rm arrayTutorial.o arrayTutorial

