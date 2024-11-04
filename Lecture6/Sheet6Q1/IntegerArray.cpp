#include <iostream>
#include <cstring>
#include <cmath>
#include "IntegerArray.h"

using namespace std;

void input_array(int a[], int n)
{
	for (int position = 0; position < n; position++)
	{
		cout << "Enter the integer value you want to assign to position " << position << " of the array: \n";
		cin >> a[position];
	}
}

void input_array(char a[], int n)
{
	for (int position = 0; position < n; position++)
	{
		cout << "Enter the character value you want to assign to position " << position << " of the array: \n";
		cin >> a[position];
	}

}


void display_array(int a[], int n)
{
	cout << "The first " << n << " entries of your array are as follows: \n";

	for (int display_length = 0; display_length < n; display_length++)
	{
		cout << a[display_length] << endl;
	}
}

void display_array(char a[], int n)
{
	cout << "The first " << n << " entries of your array are as follows: \n";

	for (int display_length = 0; display_length < n; display_length++)
	{
		cout << a[display_length] << endl;
	}
}


void copy_array(char a1[], char a2[], int n)
{
	for (int position = 0; position < n; position++)
	{
		a1[position] = a2[position];
	}
}


double average(int a[], int n)
{
	double total = 0;
	int count;
	for (count = 0 ; count < n ; count++)
	{
		total += static_cast<double>(a[count]);
	}
	return (total / n);
}

double average(double a[], int n)
{
	double total = 0;
	int count;
	for (count = 0 ; count < n ; count++)
	{
		total += static_cast<double>(a[count]);
	}
	return (total / n);
}

void standard_deviation(int a[], int n)
{	

	double mean = average(a, n);

	double temp_array[n];

	for(int count = 0; count < n; count++)
	{
		temp_array[count] = ((a[count] - mean) * (a[count] - mean));
	}

	double new_mean = average(temp_array, n);

	double std_dev = sqrt(new_mean);

	cout << "The standard deviation of the first " << n << " entries of the array is: \n";
	cout << std_dev << endl;
}


