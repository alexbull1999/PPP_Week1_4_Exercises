execute: mainprogram.o multiplymatrix.o
	g++ -Wall -g mainprogram.o multiplymatrix.o -o execute

mainprogram.o: mainprogram.cpp functions.h
	g++ -Wall -g  -c mainprogram.cpp

multiplymatrix.o: multiplymatrix.cpp functions.h
	g++ -Wall -g -c multiplymatrix.cpp

clean:
	rm -f *.0 execute

