/* This program illustrates the Quick Sort and RECURSIVE binary search algorithm. */ 

#include<iostream>
using namespace std;

const int MAX = 10;

/* Function which sorts the elements in list from
list[left] to list[right] into ascending order */
void quick_sort(int list[MAX], int left, int right);

/* Function to swap the values of two integer variables */
void swap(int& first, int& second);

/* Function to display the contents of the array "a" up to element a[length-1] */
void display(int a[], int length);

/* Recursive function to return the position of a given value in the list
 * (named binary_search) */
int binary_search(int value, int list[MAX], int first, int last);

/* START OF MAIN PROGRAM */
int main()
{
	int list[MAX];
	int count;
	
	for (count = 0 ; count < MAX ; count++)
	{
			cout << "Enter value of element " << count << ": ";
			cin >> list[count];
		}
	
	cout << "\n\nBefore Quick Sort:\n\n";
	
	display(list,MAX);
	
	quick_sort(list, 0, MAX -1);
	
	cout << "\n\nAfter Quick Sort:\n\n";
	
	display(list,MAX);

	int search_value;
	cout << "Enter the value whose position in the list you want to know: ";
	cin >> search_value;
	
	if (binary_search(search_value, list, 0, count) >= 0)
	{
		cout << "The value was in position " << binary_search(search_value, list, 0, count) << " in the list\n";
	}
	else
	{
		cout << binary_search(search_value, list, 0, count) << " (Value not in list!)\n";
	}
	
	return 0;
}
/* END OF MAIN PROGRAM */

/* FUNCTION DEFINITION OF quick_sort: */
void quick_sort(int list[], int left, int right)
{
	int pivot, left_arrow, right_arrow;
	
	left_arrow = left;
	right_arrow = right;
	pivot = list[(left + right)/2];
	
	do
	{
			while (list[right_arrow] > pivot)
				right_arrow--;
			while (list[left_arrow] < pivot)
				left_arrow++;
			if (left_arrow <= right_arrow)
			{
						swap(list[left_arrow], list[right_arrow]);
						left_arrow++;
						right_arrow--;
					}
		}
	while (right_arrow >= left_arrow);
	
	if (left < right_arrow)
		quick_sort(list, left, right_arrow);
	if (left_arrow < right)
		quick_sort(list, left_arrow, right);
}
/* END OF FUNCTION */

/* DEFINITION OF FUNCTION "swap" */
void swap(int& first, int& second)
{
	int temp = first;
	first = second;
	second = temp;
}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF FUNCTION "display" */
void display(int a[], int length)
{
	for (int count = 0 ; count < length ; count++)
		cout << a[count] << " ";
	cout << "\n\n";
}
/* END OF FUNCTION DEFINITION */

/* DEFINTION OF FUNCTON BINARY_SEARCH */
int binary_search(int value, int list[MAX], int first, int last)
{	
	int half = ((last+first)/2);

	if (value == list[half])
	{
		return half;
	}

	else if (value > list[half] && value <= list[last])
	{
		int result = binary_search(value, list, half, last);
		return result;
	}

	else if (value < list[half] && value >= list[first])
	{
		int result = binary_search(value, list, first, half);			
		return result;
	}

	else
	{
		return -1;
	}
		
}

