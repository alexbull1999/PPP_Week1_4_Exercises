#include <iostream>
#include <cmath>

using namespace std;


long double bracket1(long double a, long double b);

long double bracket2(long double a, long double b, long double b1);

long double bracket3(long double a, long double b, long double b2);



int main()
{
	long double a = 77617;
	long double b = 33096;
	long double F;

	long double b1;
	long double b2;
	long double b3;

	b1 = bracket1(a, b);

	b2 = bracket2(a, b, b1);

	b3 = bracket3(a, b, b2);

	F = b3 + (a/(2*b));

	cout << F << endl;

	cout << "Float answer is -1.58342e+37" << endl;
	cout << "Double answer is same as float answer" << endl;
	cout << "Long double answer is same as float and double answer" << endl;
}

long double bracket1(long double a, long double b)
{
	long double c = ((11 * pow(a, 2) * pow(b, 2))-(121 * pow(b, 4)) - 2);
	return c;
}

long double bracket2(long double a, long double b, long double b1)
{
	long double d = ((333.75 * pow(b, 6))+(pow(a, 2) * b1) - (5.5 * pow(b, 8))); 
	return d;
}

long double bracket3(long double a, long double b, long double b2)
{
	long double e = (b2 - (pow(a, 2) * pow(b, 6)));
	return e;
}

