/* This program prints out a conversion table of temperatures, after
	prompting the user for upper and lower bounds of the table in
	Fahrenheit, and the temperature difference between table entries. */ 

	#include <iostream>
	using namespace std;
	
	double celsius_of(int fahr);
	double absolute_value_of(int fahr);
	void print_preliminary_message();
	void int input_table_specifications(int& lower, int& upper, int& step);
	void int print_table(int& lower, int& upper, int& step);
	void int print_message_echoing_input(const int& lower, const int& upper, const int& step);

	/* START OF MAIN PROGRAM */
	int main() 
	{	
		int lower = 0; /* the lowest Fahrenheit entry in the table */
		int upper = 0; /* the highest Fahrenheit entry in the table */
		int step = 1;  /* difference in Fahrenheit between entries */

		/* print a message explaining what the program does: */
		print_preliminary_message();
	
		/* prompt the user for table specifications in Fahrenheit: */
		input_table_specifications(lower, upper, step);
	
		/* print appropriate message including an echo of the input: */
		print_message_echoing_input(lower, upper, step);
	
		/* Print the table (including the column headings): */
		print_table(lower, upper, step);

		return 0;
	}
	/* END OF MAIN PROGRAM */

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
