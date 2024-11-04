#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
	char string1[MAXLENGTH];
	char string2[MAXLENGTH];
	bool truefalse;

	input_array1(string1);

	output_array1(string1);

	input_array2(string2);

	output_array2(string2);

	truefalse = alpha_compare(string1, string2);

	if (truefalse == true)
	{
		cout << "The first string is therefore smaller than the second string \n";
	}
	else
	{
		cout << "The second string is therefore smaller than the first string \n";

	}
}


