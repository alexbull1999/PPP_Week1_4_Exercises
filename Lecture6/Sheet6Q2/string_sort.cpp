#include <iostream>
#include <string.h>
#include "functions.h"

using namespace std;

void string_sort(char phrase[], int length)
{
	for (int count = 0; count < length; count++)
	{
		swap(phrase[count], phrase[minimum_from(phrase, count, length)]);
	}
	
	for (int output_count = 0; output_count < length; output_count++)
	{
		cout << phrase[output_count];
	}
	cout << "\n\n";
}

int minimum_from(char phrase[], int position, int length)
{
	int min_index = position;

	for (int count = position + 1; count < length; count++)
	{
		if (phrase[count] < phrase[min_index])
		{
			min_index = count; 
		}
	}
	return min_index;
}

void swap(char& first, char& second)
{
	char temp = first;
	first = second;
	second = temp;
}

