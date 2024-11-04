#include <iostream>
#include <string.h>
#include "functions.h"

using namespace std;

int main()
{
	int length;
	const int MAXIMUM_LENGTH = 81;
	char phrase[MAXIMUM_LENGTH];
	cout << "Type in a string (Max. 80 letters including spaces): ";
	cin.getline(phrase, MAXIMUM_LENGTH);
	length = strlen(phrase);

	cout << "The sorted string is: ";
	string_sort(phrase, (length+1)); /* Add one to include sentinel character */

	return 0;
}
