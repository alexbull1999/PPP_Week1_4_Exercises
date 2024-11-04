
#include<iostream>
#include<cstdlib>
using namespace std;

/* Function which calculates the greatest common divisor of its 
two positive integer arguments. */
int greatest_common_divisor(int first_number, int second_number);

/* MAIN PROGRAM: */
int main()
{
	int first_positive_number, second_positive_number;
	
	cout << "Enter a positive integer: ";
	cin >> first_positive_number;
	cout << "Enter another positive integer: ";
	cin >> second_positive_number;

	cout << "\nThe greatest common divisor of " << first_positive_number;
	cout << " and " << second_positive_number << " is ";
	cout << greatest_common_divisor(first_positive_number, second_positive_number) << ".\n";
	
	return 0;
}
/* END OF MAIN PROGRAM */

/* FUNCTION DEFINITION OF greatest_common_divisor: */
int greatest_common_divisor(int first_number, int second_number)
{
	if (first_number < 1 || second_number < 1)
	{
		cout << "\n\nError - non-positive argument to 'greatest_common_divisor'\n";
		exit(1);
	}
	else if (first_number == second_number)
		return first_number;
	else if (first_number < second_number)
		return greatest_common_divisor(first_number, (second_number - first_number));
	else
		return greatest_common_divisor(second_number, (first_number - second_number));
}
/* END OF FUNCTION */

