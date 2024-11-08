#include <iostream>
#include <iomanip>
using namespace std;

enum Day {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

void print_day(const Day &day, ostream &cout);

/* IF BUGS TRY DATA TYPE VOID */

int closing_time(Day day_of_the_week);

/* MAIN PROGRAM */
int main()
{
	int count;

	cout.setf(ios::left);
	/* Print table heading */
	cout.width(17);
	cout << "DAY";
	cout << "CLOSING TIME\n\n";

	/* Print table from Sunday to Saturday */
	for (count = static_cast<int>(Sun) ; count <= static_cast<int>(Sat) ; count++)
	{
		cout.width(19);
		print_day(static_cast<Day>(count), cout);
		cout << closing_time(static_cast<Day>(count)) << "pm\n";
	}

	return 0;
}

/* End of main program */

/* Function to print day of the week from enum Day type */

void print_day(const Day &day, ostream &cout)
{
	switch (day)
	{ 
		case Sun: cout << "Sunday"; break;
		case Mon: cout << "Monday"; break;
		case Tue: cout << "Tuesday"; break;
		case Wed: cout << "Wednesday"; break;
		case Thu: cout << "Thursday"; break;
		case Fri: cout << "Friday"; break;
		case Sat: cout << "Saturday"; break;
		default: cout << "ERROR!";
	}
}

/*Function to generate shop closing times from day of week */

int closing_time(Day day_of_the_week)
{
	switch (day_of_the_week)
	{
		case Sun: return 1;
		case Sat: return 5;
		case Wed: return 8;
		default: return 6;
	}
	
}
