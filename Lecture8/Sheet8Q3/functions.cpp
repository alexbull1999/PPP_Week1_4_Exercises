#include <iostream>
#include "functions.h"

using namespace std;

int greatest_common_divisor(int n, int m)
{
	int divisor;
	for (divisor = m; divisor > 0; divisor--)
	{
		if ((n % divisor == 0) && (m % divisor == 0))
		{
			return divisor;
		}
		else
		{
			continue;
		}
	}
}


