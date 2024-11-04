#include <iostream>
#include "functions.h"

using namespace std;

void input_array1(char string1[MAXLENGTH])
{
	cout << "Enter a sentence for string 1 (use only lowercase letters and no spaces): ";
	
	cin.getline(string1, MAXLENGTH);	

}

void output_array1(char string1[MAXLENGTH])
{
	cout << "For clarity, the sentence you inputted for string 1 is: ";

	for ( int index = 0 ; string1[index] != '\0'; index++)
	{
		cout << string1[index];
	}

	cout << "\n\n";

}

void input_array2(char string2[MAXLENGTH])
{
	cout << "Enter a sentence for string 2 (use only lowercase letters and no spaces): ";
	
	cin.getline(string2, MAXLENGTH);
}

void output_array2(char string2[MAXLENGTH])
{
	cout << "For clarity, the sentence you inputted for string 2 is: ";
	int index = 0;

	for ( ; string2[index] != '\0'; index++)
	{
		cout << string2[index];
	}

	cout << "\n\n";

}


bool alpha_compare(char string1[MAXLENGTH], char string2[MAXLENGTH])
{
	int s1sum = 0;
	int s2sum = 0;
	int index = 0;

	while (string1[index] != '\0')
	{
		s1sum += static_cast<int>(string1[index]);
		index++;
	}

	index = 0;

	while (string2[index] != '\0')
	{
		s2sum += static_cast<int>(string2[index]);
		index++;
	}

	cout << "The alphabetical value of string 1 is: " << s1sum << "\n";
	cout << "The alphabetical value of string 2 is: " << s2sum << "\n";

	if (s1sum < s2sum)
	{
		return true;
	}
	else
	{
		return false;
	}

}
