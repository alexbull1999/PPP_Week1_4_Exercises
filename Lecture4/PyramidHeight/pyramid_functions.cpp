#include <iostream>
#include <iomanip>
#include <string>
#include "pyramid_functions.h"

using namespace std;

int getheight()
{
	int x;
	cout << "How high would you like the pyramid? ";
	cin >> x;
	cout << "\n";
	
	if (x > 30 || x < 1)
	{
		cout << "Pick another height (must be between 1 and 30): ";
		cin >> x;
		cout << "\n";
	}
	return x;
}

void print_pyramid(int height)
{
	int linenum;
	int const MARGIN = 10;
	cout << "\n" << "\n";
	for (linenum = 1 ; linenum <= height; linenum++)
	{
		int count;
		int total_spaces = MARGIN + height - linenum;

		for (count = 1; count <= total_spaces; count++)
		{
			cout << " ";
		}

		for (count = 1; count <= linenum * 2; count++)
		{
			cout << "*";
		}
		cout << endl;
	}

}

