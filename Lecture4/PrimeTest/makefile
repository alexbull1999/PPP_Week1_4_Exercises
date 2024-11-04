prime.exec: mainprogramfile.o b_prime_test.o
	g++ -Wall -g mainprogramfile.o b_prime_test.o -o prime.exec

mainprogramfile.o: mainprogramfile.cpp b_prime.h
	g++ -Wall -g -c mainprogramfile.cpp

b_prime_test.o: b_prime_test.cpp b_prime.h
	g++ -Wall -g -c b_prime_test.cpp

clean:
	rm -f *.o prime.exec
