/* This program tests whether the functions declared in IntegerArray.h work */

/* Trying to input an array with type int in input_array function, to a2 of type char ??? */

#include <iostream>
#include <cstring>
#include <cmath>
#include "IntegerArray.h"

using namespace std;

int main()
{
	int array_length, output_length, copy_length, std_dev_length;
	int array_length_2;

	/* Input n values to array a */

	cout << "Enter the # of values you want to input into array a: \n";
	cin >> array_length;

	int a[array_length];

	input_array(a, array_length);

	/* display n values of array a to screen */

	cout << "Enter the # of values of array a you want to display on the screen: \n";
	cin >> output_length;

	if (output_length > array_length)
	{
		cout << "Warning bounds error - cannot display more values than the array contains \n";
		exit(1);
	}

	else 
	{
		display_array(a, output_length);

	}
	
	/* input n values to array a2 */
	/* copy the first n elements of a2 to a1 */

	cout << "Enter the # of values you want to input into array a2: \n";
	cin >> array_length_2;

	char a2[array_length_2];

	input_array(a2, array_length_2);

	display_array(a2, array_length_2);

	cout << "Enter the # of values from a2 to copy to a1: \n";
	cin >> copy_length;

	if (copy_length > array_length_2)
	{
		cout << "You've encountered a bounds error; trying to copy more characters than the array contains.\n";
		exit(1);
	}
	
	else
	{
		char a1[copy_length + 1]; /* Room for sentinel value */

		copy_array(a1, a2, copy_length);

		display_array(a1, copy_length);
	}

	/* find and return std deviation of first n values of array a */

	cout << "Enter the # of values of array a to find the std dev for: \n";
	cin >> std_dev_length;

	if (std_dev_length > array_length)
	{
		cout << "Warning bounds error - cannot display more values than the array contains \n";
		exit(1);
	}

	else
	{
		standard_deviation(a, std_dev_length);
	}

	return 0;
}
