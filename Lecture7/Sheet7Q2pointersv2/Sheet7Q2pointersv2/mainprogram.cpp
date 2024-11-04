#include <iostream>
#include "functions.h"

using namespace std;

int main()
{

	CharPtrType string1_ptr, string2_ptr;
	string1_ptr = new (nothrow) char[MAXLENGTH];
	if (string1_ptr == NULL)
	{
		cout << "Warning no memory";
		exit(1);
	}

	string2_ptr = new (nothrow) char[MAXLENGTH];
	if (string2_ptr == NULL)
	{
		cout << "Warning no memory";
		exit(1);
	}

	bool truefalse;

	input_array1(string1_ptr);

	output_array1(string1_ptr);

	input_array2(string2_ptr);

	output_array2(string2_ptr);

	truefalse = alpha_compare(string1_ptr, string2_ptr);

	if (truefalse == true)
	{
		cout << "The first string is therefore smaller than the second string \n";
	}
	else
	{
		cout << "The second string is therefore smaller than the first string \n";

	}

	delete [] string1_ptr;
	string1_ptr == NULL;
	
	delete [] string2_ptr;
	string2_ptr == NULL;

	return 0;

}


