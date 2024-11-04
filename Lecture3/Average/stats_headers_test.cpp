#include <iostream>
#include <cmath>
#include "statistics.h"

using namespace std;

int test_one_value(int a);
int test_two_values(int a, int b);
int test_three_values(int a, int b, int c);
int test_four_values(int a, int b, int c, int d);

int main()
{
	int how_many_tests;
	cout << "This program tests the functions in the 'statistics.h' header file." << "\n" << "\n";
	cout << "Do you wish to test 1, 2, 3, or 4 numbers? (Enter 0 to end the program): ";
	cin >> how_many_tests;
	cout << "\n";

	for( ; how_many_tests != 0;  ) 
	{
			switch(how_many_tests) 
			{
				case 1:
					double val1;
					cout << "Enter first value: ";
					cin >> val1;
					cout << "Average: " << average(val1) << ". ";
					cout << "Standard deviation: " << standard_deviation(val1) << "\n" << "\n";
					cout << "Do you wish to test 1, 2, 3, or 4 numbers? (Enter 0 to end the program): ";
					cin >> how_many_tests;
					cout << "\n";
					break;
				case 2:
					double val1a, val2;
					cout << "Enter first value: ";
					cin >> val1a;
					cout << "Enter second value: ";
					cin >> val2;
					cout << "Average: " << average(val1a, val2) << ". ";
					cout << "Standard deviation: " << standard_deviation(val1a, val2) << "\n" << "\n";
					cout << "Do you wish to test 1, 2, 3, or 4 numbers? (Enter 0 to end the program): ";
					cin >> how_many_tests;
					cout << "\n";
					break;
				case 3:
				  	double val1b, val2a, val3;
					cout << "Enter first value: ";
					cin >> val1b;
					cout << "Enter second value: ";
					cin >> val2a;
					cout << "Enter third value: ";
					cin >> val3;
					cout << "Average: " << average(val1b, val2a, val3) << ". ";
					cout << "Standard deviation: " << standard_deviation(val1b, val2a, val3) << "\n" << "\n";
					cout << "Do you wish to test 1, 2, 3, or 4 numbers? (Enter 0 to end the program): ";
					cin >> how_many_tests;
					cout << "\n";
					break;
				case 4:
					double val1c, val2b, val3a, val4;
					cout << "Enter first value: ";
					cin >> val1c;
					cout << "Enter second value: ";
					cin >> val2b;
					cout << "Enter third value: ";
					cin >> val3a;
					cout << "Enter fourth value: ";
					cin >> val4;
					cout << "Average: " << average(val1c, val2b, val3a, val4) << ". ";
					cout << "Standard deviation: " << standard_deviation(val1c, val2b, val3a, val4) << "\n" << "\n";
					cout << "Do you wish to test 1, 2, 3, or 4 numbers? (Enter 0 to end the program): ";
					cin >> how_many_tests;
					cout << "\n";
					break;
				default:
					cout << "Sorry, the program can only test 1, 2, 3, or 4 values." << "\n" << "\n";
					cout << "Do you wish to test 1, 2, 3, or 4 numbers? (Enter 0 to end the program): ";
					cin >> how_many_tests;
					break;
			}
			
	}

	cout << "Finished testing 'statistics.h' header file." << "\n";
	return 0;

}
