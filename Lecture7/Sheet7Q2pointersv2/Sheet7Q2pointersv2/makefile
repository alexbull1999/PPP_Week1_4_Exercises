program: mainprogram.o functions.o
	g++ -Wall -g mainprogram.o functions.o -o program

mainprogram.o: mainprogram.cpp
	g++ -Wall -g -c mainprogram.cpp

functions.o: functions.cpp
	g++ -Wall -g -c functions.cpp

clean:
	rm -f *.o execute
