#include <iostream>
#include <cstdlib>
#include "functions.h"

using namespace std;

void input_array1(char* string1_ptr)
{
	cout << "Enter a sentence for string 1 (use only lowercase letters and no spaces).\n";
	cout << "When you've finished your sentence, hit fullstop: ";
	
	char input_var;
	int index = 0;
	for (; input_var != '.'; index++)
	{
		cin >> input_var;
		*(string1_ptr + index) = input_var;
	}
	index++;
	*(string1_ptr + index) = '\0';

}

void output_array1(char* string1_ptr)
{
	cout <<  "\n" << "For clarity, the sentence you inputted for string 1 is: ";

	/* If no sentinel working; try iwth full stop */

	for ( ; *(string1_ptr) != '\0'; string1_ptr++)
	{
		cout << *(string1_ptr);
	}
	cout << "\n\n";
}


void input_array2(char* string2_ptr)
{
	cout << "Enter a sentence for string 2 (use only lowercase letters and no spaces).\n";
	cout << "When you've finished your sentence, hit fullstop: ";
	
	char input_var = 'Q';
	int index = 0;
	for (; input_var != '.'; index++)
	{
		cin >> input_var;
		*(string2_ptr + index) = input_var;
	}
	index++;
	*(string2_ptr + index) = '\0';

}


void output_array2(char* string2_ptr)
{
	cout << "\n" << "For clarity, the sentence you inputted for string 2 is: ";

	/* If no sentinel working; try iwth full stop */

	for ( int index = 0 ; *(string2_ptr + index) != '\0'; index++)
	{
		cout << *(string2_ptr + index);
	}

	cout << "\n\n";
}


bool alpha_compare(char* string1_ptr, char* string2_ptr)
{
	int s1val = 0;
	int s2val = 0;
	int index = 0;

	if (string1_ptr == NULL || string2_ptr == NULL)
	{
		cout << "Warning, run out of memory --> null pointer";
		exit(1);
	}

	/* Change to pointer arithmetic */

	for ( ; *(string1_ptr + index) != 0 || *(string2_ptr + index) !=0 ; index++ )
	{
		s1val = static_cast<int>(*(string1_ptr + index));
		s2val = static_cast<int>(*(string2_ptr + index));

		if (s1val < s2val)
		{
			return true;
		}

		else if (s1val == s2val)
		{
			continue;
		}

		else
		{
			return false;
		}

	}

	return 0;

}

	
	/* Comment out


	while (*(string1_ptr + index) != '\0')
	{
		s1val += static_cast<int>(*(string1_ptr + index));
		index++;
	}

	index = 0;

	while (*(string2 + index) != '\0')
	{
		s2sum += static_cast<int>(*(string2_ptr + index));
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

	*/ 


