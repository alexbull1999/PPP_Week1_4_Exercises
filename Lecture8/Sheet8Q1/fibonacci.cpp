#include <iostream>

using namespace std;

int fibonacci(int n)
{
	int fibonacci_output = 0;

	if (n == 1 || n == 2)
	{
		fibonacci_output = 1;
		return fibonacci_output;
	}

	else if (n > 2)
	{
		for (int counter = n-1 ; counter > n - 3; counter--) // a(n) = a(n-1) + a(n-2) for all n>2
		{
			fibonacci_output += fibonacci(counter);
		}
		return fibonacci_output;
	}

	else
	{
		cout << "\nYou've entered an invalid input. The fibonacci sequence can only take positive integer inputs.\n";
		exit(1);
	}
}




int main()
{
	int input;

	cout << "Enter the position of the Fibonacci sequence you want to know the number for: ";
	cin >> input;
	
	cout << "\nThe Fibonacci number corresponding to position " << input << " in the sequence is:\n";
	cout << fibonacci(input) << "\n" << endl;

	return 0;
}
