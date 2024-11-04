program.exec: mainprogram.o string_sort.o 
	g++ -Wall -g mainprogram.o string_sort.o -o program.exec

mainprogram.o: mainprogram.cpp functions.h
	g++ -Wall -g -c mainprogram.cpp

string_sort.o: string_sort.cpp functions.h
	g++ -Wall -g -c string_sort.cpp

clean:
	rm -f *.o program.exec
