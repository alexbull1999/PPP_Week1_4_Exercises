execute: main.o functions.o
	g++ -Wall -g main.o functions.o -o execute

main.o: main.cpp functions.h
	g++ -Wall -c main.cpp

functions.o: functions.cpp functions.h
	g++ -Wall -c functions.cpp

clean: 
	rm -f *.o execute

