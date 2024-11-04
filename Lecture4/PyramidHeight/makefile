pyramid.exec: mainprogramfile.o pyramid_functions.o
	g++ -Wall -g mainprogramfile.o pyramid_functions.o -o pyramid.exec

mainprogramfile.o: mainprogramfile.cpp pyramid_functions.h
	g++ -Wall -g -c mainprogramfile.cpp

pyramid_functions.o: pyramid_functions.cpp pyramid_functions.h
	g++ -Wall -g -c pyramid_functions.cpp

clean:
	rm -f *.o pyramid.exec
