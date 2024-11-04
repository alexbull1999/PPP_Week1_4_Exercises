program.exec: mainprogram.o IntegerArray.o
	g++ -Wall -g mainprogram.o IntegerArray.o -o program.exec

mainprogram.o: mainprogram.cpp IntegerArray.h
	g++ -Wall -g -c mainprogram.cpp

IntegerArray.o: IntegerArray.cpp IntegerArray.h
	g++ -Wall -g -c IntegerArray.cpp

clean:
	rm -f *.o program.exec



