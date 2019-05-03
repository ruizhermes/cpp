all:	pointersTutorial

pointersTutorial:	pointersTutorial.o
	g++ -o pointersTutorial pointersTutorial.o

pointersTutorial.o:	pointersTutorial.cpp
	g++ -c -std=c++11 pointersTutorial.cpp

clean:
	rm pointersTutorial.o pointersTutorial

