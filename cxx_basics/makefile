all:	functionsTutorial

functionsTutorial:	functionsTutorial.o
	g++ -o functionsTutorial functionsTutorial.o

functionsTutorial.o:	functionsTutorial.cpp
	g++ -c -std=c++11 functionsTutorial.cpp

clean:
	rm functionsTutorial.o functionsTutorial

