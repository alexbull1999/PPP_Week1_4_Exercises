#include <iostream>
#include "b_prime.h"
#include <cmath>

using namespace std;

bool prime_test(int x)
{
	bool is_prime;
	if (x > 1000)
	{
		cout << "Integer entered is greater than 1000" << endl;
	}
	else if (x < 1)
	{
		cout << "Integer enetered is less than 1" << endl;
	}
	else if (x == 1)
	{
		return false;
	}
	else if (x == 2)
	{
		return true;
	}
	else
	{
		int i = 2;
		int result;
		do 
		{
			result = x % i;
			i++;
		}
		while (i < sqrt(x) && result != 0);

		if (result == 0)
		{
			is_prime = false;
		}
		else
		{
			is_prime = true;
		}
	}
	return is_prime;
}
