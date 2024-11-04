#include<iostream>
#include<cmath>
#include"statistics.h"

using namespace std;

/* FUNCTION TO CALCULATE AVERAGE OF ONE NUMBER */
double average(double no_1)
{
return no_1;
}
/* END OF FUNCTION */

/* FUNCTION TO CALCULATE AVERAGE OF TWO NUMBERS */
double average(double no_1, double no_2)
{
	return (no_1 + no_2) / 2;
}
/* END OF FUNCTION */

/* FUNCTION TO CALCULATE AVERAGE OF THREE NUMBERS */
double average(double no_1, double no_2, double no_3)
{
	return (no_1 + no_2 + no_3) / 3;
}
/* END OF FUNCTION */

/* FUNCTION TO CALCULATE AVERAGE OF FOUR NUMBERS */
double average(double no_1, double no_2, double no_3, double no_4)
{
	return (no_1 + no_2 + no_3 + no_4) / 4;
}
/* END OF FUNCTION */

/* FUNCTION TO CALCULATE STANDARD DEVIATION OF ONE NUMBER */
double standard_deviation(double no_1)
{
	return 0;
}
/* END OF FUNCTION */

/* FUNCTION TO CALCULATE STANDARD DEVIATION OF TWO NUMBERS */
double standard_deviation(double no_1, double no_2)
{
	double arg_1, arg_2;
	
	arg_1 = (no_1 - average(no_1,no_2)) * (no_1 - average(no_1,no_2));
	arg_2 = (no_2 - average(no_1,no_2)) * (no_2 - average(no_1,no_2));
	
	return sqrt(average(arg_1,arg_2));
}
/* END OF FUNCTION */

/* FUNCTION TO CALCULATE STANDARD DEVIATION OF THREE NUMBERS */
double standard_deviation(double no_1, double no_2, double no_3)
{
	double arg_1, arg_2, arg_3;
	
	arg_1 = (no_1 - average(no_1,no_2,no_3)) * (no_1 - average(no_1,no_2,no_3));
	arg_2 = (no_2 - average(no_1,no_2,no_3)) * (no_2 - average(no_1,no_2,no_3));
	arg_3 = (no_3 - average(no_1,no_2,no_3)) * (no_3 - average(no_1,no_2,no_3));
	
	return sqrt(average(arg_1,arg_2,arg_3));
}
/* END OF FUNCTION */

/* FUNCTION TO CALCULATE STANDARD DEVIATION OF FOUR NUMBERS */
double standard_deviation(double no_1, double no_2, double no_3, double no_4)
{
	double arg_1, arg_2, arg_3, arg_4;
	
	arg_1 = (no_1 - average(no_1,no_2,no_3,no_4)) * (no_1 - average(no_1,no_2,no_3,no_4));
	arg_2 = (no_2 - average(no_1,no_2,no_3,no_4)) * (no_2 - average(no_1,no_2,no_3,no_4));
	arg_3 = (no_3 - average(no_1,no_2,no_3,no_4)) * (no_3 - average(no_1,no_2,no_3,no_4));
	arg_4 = (no_4 - average(no_1,no_2,no_3,no_4)) * (no_4 - average(no_1,no_2,no_3,no_4));
	
	return sqrt(average(arg_1,arg_2,arg_3,arg_4));
}
/* END OF FUNCTION */
