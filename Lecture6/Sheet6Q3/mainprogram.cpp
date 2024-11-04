/* This program asks the user to input a string */
/* The program then outputs a copy of that string, with no repeated characters */
/* The program then outputs a copy of that string sorted alphabetically */

#include <iostream>
#include <cstring>

using namespace std;

const int MAX_LENGTH = 81;

/* Function to remove repetitions */

void no_repetitions(char string[]);

/* Function to sort string alphabetically */

void string_sort(char string[]);

int minimum_from(char string[], int count);

void swap(char &first, char &second);

/* Main program */

int main()
{
	char user_string[MAX_LENGTH];

	cout << "Type in a string (Max. 80 characters incl. spaces): ";
	cin.getline(user_string, MAX_LENGTH);

	no_repetitions(user_string);	

	cout << "\n";
	
}

void no_repetitions(char string[])
{

	char temp_string[MAX_LENGTH];
	int counter;
	int position_index = 0;
	int position_index_2 = 0;
	bool nrep_flag = false;

	while (string[position_index] != '\0')
	{
		for (counter = 0; temp_string[counter] != '\0'; counter++)
		{
			
			if (temp_string[counter] == string[position_index])
			{
				nrep_flag = false;
				break;
			}
			else
			{
				nrep_flag = true;
			}
		}

		if (nrep_flag == true)
		{
			temp_string[position_index_2] = string[position_index];
			position_index_2++;
		}

		position_index++;	
	}

	cout << "The string without repetitions is: " << temp_string << endl;
	
	string_sort(temp_string);

}

void string_sort(char string[])
{
	int count = 0;
	while (string[count] != 0)
	{
		swap(string[count], string[minimum_from(string, count)]);
		count++;
	}

	cout << "The string sorted alphabetically is: " << string << "\n\n";

}

int minimum_from(char string[], int position)
{
	int min_index = position;
	int count = position + 1;
	while (string[count] != '\0')
	{
		if (string[min_index] > string[count])
		{
			min_index = count;
		}
		count++;
	}
	return min_index;
}


void swap(char &first, char &second)
{
	char temp;
	temp = first;
	first = second;
	second = temp;
}



