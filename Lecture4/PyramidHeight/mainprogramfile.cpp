#include <iostream>
#include "pyramid_functions.h"

using namespace std;

int main()
{
	int height;
	cout << "This program prints a 'pyramid' shape of";
	cout << "a specified height on the screen. \n";
	height = getheight();
	print_pyramid(height);
	cout << "\n" << "Thanks for creating your pyramid" << "\n" << endl;
}

