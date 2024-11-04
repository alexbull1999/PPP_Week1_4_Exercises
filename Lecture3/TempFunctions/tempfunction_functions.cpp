#include <iostream>
#include <cmath>

#include "tempfunctions.h"

using namespace std;



	/* FUNCTION TO CONVERT FAHRENHEIT TO CELSIUS */
	double celsius_of(int fahr)
	{
		return (static_cast<double>(5)/9) * (fahr - 32);
	}
	/* END OF FUNCTION */

	/* FUNCTION TO CONVERT FAHRENHEIT TO ABSOLUTE VALUE */
	double absolute_value_of(int fahr)
	{
		return ((static_cast<double>(5)/9) * (fahr - 32)) + 273.15;
	}
	/* END OF FUNCTION */
	
	/* FUNCTION TO PRINT PRELIMINARY MESSAGE */
	void print_preliminary_message()
	{
	  cout <<  "This program converts from Fahrenheit to Celsius to Kelvin.";
	  cout << "\n";
	}
	/* END OF FUNCTION */

	/* FUNCTION TO DETERMINE INPUT TABLE SPECIFICATIONS */
	void input_table_specifications(int& lower, int& upper, int& step)
	{
		cout << "Enter the lowest Fahrenheit temperature to convert: ";
		cin >> lower;
		cout << "Enter the highest Fahrenheit temperature to convert: ";
		cin >> upper;
		cout << "Enter the step change in temperature conversions: ";
		cin >> step;
		cout << "\n";
	}

	/* FUNCTION TO ECHO INPUT SPECIFICATIONS */
	void print_message_echoing_input(const int& lower, const int& upper, const int& step)
	{
		cout << "Your lowest Fahrenheit temperature was " << lower << "\n";
		cout << "Your highest Fahrenheit temperature was " << upper << "\n";
		cout << "Your step change in temperature was " << step << "\n";
	}

	/* FUNCTION TO PRINT TABLE */
	void print_table(int& lower, int& upper, int& step)
	{
		cout.width(15);
			cout << "Fahrenheit";
			cout.width(17);
			cout << "Celsius";
			cout.width(20);
			cout << "Absolute Value" << endl << endl;

			cout.precision(2);
			cout.setf(ios::fixed);

		int fahr;
		for (fahr = lower; fahr <= upper; fahr += step) {
			
			cout << "	";
			cout.width(15);
			cout << fahr;
			cout.width(15);
			cout << celsius_of(fahr);
			cout.width(15);
			cout << absolute_value_of(fahr);
			cout << "\n";
		}
	}
