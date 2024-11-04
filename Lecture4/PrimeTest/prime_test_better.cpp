#include <iostream>
#include "b_prime.h"
#include <cmath>

using namespace std;

bool prime_test(int x)
{
	if (x == 1)
	{
		return false;
	}
	else if (x == 2)
	{
		return true;
	}
	else
	{
		for(int i = 2; i <= sqrt(x); i++) {
			if((x % i == 0))
			{
				return false;
			}
		}
	}
return true;
}
