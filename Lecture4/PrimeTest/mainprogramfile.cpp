#include <iostream>
#include <cmath>
#include "b_prime.h"

using namespace std;

int main ()
{
	int value;
	bool result;
	while (value != 0)
	{
		cout << "Enter a positive integer between 1 and 1000 ";
		cout << "(Enter 0 to end the program) " << endl;
		cin >> value;

		if (value > 1000)
		{
			cout << "Integer entered is greater than 1000" << endl;
			continue;
		}

		else if (value < 0)
		{
			cout << "Negative integer entered" << endl;
			continue;
		}
		else if (value == 0)
		{
			cout << "Thanks for testing if your number was a prime!" << endl;
			return 0;
		}
		else
		{
			result = prime_test(value);
			if (result == true)
			{
				cout << "Wahey, you've found a prime integer between 1 and 1000!" << endl;
			}
			else
			{
				cout << "Sorry you're number is not prime!" << endl;
			}
		}

	}
}
