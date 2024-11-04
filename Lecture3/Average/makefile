stats.exec: stats_headers_test.o statistics.o
	g++ -Wall -g stats_headers_test.o statistics.o -o stats.exec

stats_headers_test.o: stats_headers_test.cpp statistics.h
	g++ -Wall -g -c stats_headers_test.cpp

statistics.o: statistics.cpp statistics.h
	g++ -Wall -g -c statistics.cpp

clean:
	rm -f *.o stats.exec
