#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
	int n, m;

	cout << "Enter two positive integers, for which you want to find the greatest common divisor of.\n";
	cout << "Enter the larger of the two integers now: ";
	cin >> n; 
	cout << "\nEnter the smaller of the two integers now: ";
	cin >> m;

	if (n > 0 && m > 0 && n > m)
	{
		cout << "Valid integers inputted. Thank you.\n";
		cout << "Computing ... \n";
		cout << "The greatest common divisor of integers " << n << " and " << m << " is: " << greatest_common_divisor(n, m);
		cout << endl;
	}

	else if (n == m)
	{
		return n;
	}

	else
	{
		cout << "The integers inputted do not constitute a valid selection, according to the rules specified above.\n";
		exit(1);
	}

	return 0;

}
