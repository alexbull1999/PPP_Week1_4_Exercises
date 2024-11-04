
#include <iostream>
#include "statistics.h"
#include <cmath>
using namespace std;

double average(double a) 
{
	double output;
	output = (a)/1.0;
	return output;
}

double average(double a, double b)
{
	double output;
	output = (a+b)/2.0;
	return output;
}

double average(double a, double b, double c)
{
	double output;
	output = ((a+b+c)/3.0);
	return output;
}

double average(double a, double b, double c, double d)
{
	double output;
	output = (a+b+c+d)/4.0;
	return output;
}

double standard_deviation(double a)
{
  	double mean;
  	mean = average(a);
	double square = ((a - mean)*(a - mean));
	double output = sqrt(average(square));
	return output;
}

double standard_deviation(double a, double b)
{
  	double mean;
  	mean = average(a, b);
	double square1 = ((a - mean)*(a - mean));
	double square2 = ((b - mean)*(b-mean));
	double output = sqrt(average(square1, square2));
	return output;
}

double standard_deviation(double a, double b, double c)
{
  	double mean;
  	mean = average(a, b, c);
	double square1 = ((a - mean)*(a - mean));
	double square2 = ((b - mean)*(b - mean));
	double square3 = ((c - mean)*(c - mean));
	double output = sqrt(average(square1, square2, square3));
	return output;
}

double standard_deviation(double a, double b, double c, double d)
{
  	double mean;
  	mean = average(a, b, c, d);
	double square1 = ((a - mean)*(a - mean));
	double square2 = ((b - mean)*(b - mean));
	double square3 = ((c - mean)*(c - mean));
	double square4 = ((d - mean)*(d - mean));
	double output = sqrt(average(square1, square2, square3, square4));
	return output;
}


