#include <iostream>
#include "statistics.h"

using namespace std;

void input_number_of_values(int& how_many_values);
void test_one_value(); 
void test_two_values(); 
void test_three_values(); 
void test_four_values(); 

/* START OF MAIN PROGRAM */
int main() 
{	
	int number_of_values = 0;  /* (an integer between 0 and 4) */

	cout << "This program tests the functions in the 'statistics.h' header file.\n\n";

	/* ask the user how many values are to be tested: */
	input_number_of_values(number_of_values);
	
	/* test the values and prompt the user again for new values */
	for ( ; number_of_values != 0 ; )  // or simply: "while (number_of_values != 0)"
	{
		if (number_of_values == 1)
			test_one_value();
		else if (number_of_values == 2)
			test_two_values();
		else if (number_of_values == 3)
			test_three_values();
		else if (number_of_values == 4)
			test_four_values(); 
		else
			cout << "Sorry, the program can only test 1, 2, 3 or 4 values.\n\n";
		input_number_of_values(number_of_values);
	}
	cout << "Finished testing 'statistics.h' header file.\n";

	return 0;
}
/* END OF MAIN PROGRAM */
	

/* START OF FUNCTION TO INPUT AN INTEGER VALUE*/
void input_number_of_values(int& how_many_values)
{
	cout << "Do you wish to test 1, 2, 3 or 4 numbers (enter 0 to end the program): ";
	cin >> how_many_values;
	cout << "\n";
}
/* END OF FUNCTION */
	

/* FUNCTION TO INPUT 1 NUMBER, THEN PRINT OUT THE AVERAGE AND STANDARD DEVIATION */
void test_one_value()
{
	double first_value;
	
	cout << "Enter first value: ";
	cin >> first_value;
	cout << "Average: " << average(first_value); 
	cout << ". Standard deviation: " << standard_deviation(first_value); 
	cout << ".\n\n";
}
/* END OF FUNCTION */
	

/* FUNCTION TO INPUT 2 NUMBERS, THEN PRINT OUT THE AVERAGE AND STANDARD DEVIATION */
void test_two_values()
{
	double first_value;
	double second_value;
	
	cout << "Enter first value: ";
	cin >> first_value;
	cout << "Enter second value: ";
	cin >> second_value;
	cout << "Average: " << average(first_value, second_value); 
	cout << ". Standard deviation: " << standard_deviation(first_value, second_value);
	cout << ".\n\n";
}
/* END OF FUNCTION */
	

/* FUNCTION TO INPUT 3 NUMBERS, THEN PRINT OUT THE AVERAGE AND STANDARD DEVIATION */
void test_three_values()
{
	double first_value;
	double second_value;
	double third_value;
	
	cout << "Enter first value: ";
	cin >> first_value;
	cout << "Enter second value: ";
	cin >> second_value;
	cout << "Enter third value: ";
	cin >> third_value;
	cout << "Average: " << average(first_value, second_value, third_value); 
	cout << ". Standard deviation: ";
	cout << standard_deviation(first_value, second_value, third_value); 
	cout << ".\n\n";
}
/* END OF FUNCTION */
	

/* FUNCTION TO INPUT 4 NUMBERS, THEN PRINT OUT THE AVERAGE AND STANDARD DEVIATION */
void test_four_values()
{
	double first_value;
	double second_value;
	double third_value;
	double fourth_value;
	
	cout << "Enter first value: ";
	cin >> first_value;
	cout << "Enter second value: ";
	cin >> second_value;
	cout << "Enter third value: ";
	cin >> third_value;
	cout << "Enter fourth value: ";
	cin >> fourth_value;
	cout << "Average: " << average(first_value, second_value, third_value, fourth_value); 
	cout << ". Standard deviation: ";
	cout << standard_deviation(first_value, second_value, third_value, fourth_value); 
	cout << ".\n\n";
}
/* END OF FUNCTION */		
