/* This program prints out a conversion table of temperatures.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  cout << "This program converts temperatures from Fahrenheit to Celsius to Kelvin. \n";
  cout << "The user inputs the lowest and highest Fahrenheit value to be converted, and  intervals between values. \n";

  /*Initializing integers for LOWER, UPPER and STEP*/

  int LOWER, UPPER, STEP;

  cout << "Enter the lowest Fahrenheit temperature to convert: ";
  cin >> LOWER;
  cout << "Enter the highest Fahrenheit temperature to convert: ";
  cin >> UPPER;
  cout << "Enter the desired intervals between temperatures in the table: ";
  cin >> STEP;

  /* Set variables for fahr and celsius */

  int fahr = LOWER;
  double celsius = 0;

  /* Echo User input */

  cout << "Your lowest temperature to convert is: " << LOWER << "\n";
  cout << "Your highest temperature to conver is: " << UPPER << "\n";
  cout << "Your step change for conversion is: " << STEP << "\n";

  /* Print table heading */
  cout.width(15);
  cout << "Fahrenheit";
  cout.width(17);
  cout << "Celsius";
  cout.width(20);
  cout << "Absolute Value" << endl << endl;

  /* set format of individual values */
  cout.precision(2);
  cout.setf(ios::fixed);

  /* print table from LOWER to UPPER */
  for (fahr = LOWER ; fahr <= UPPER ; fahr += STEP) {
    cout << "	";
    cout.width(15);
    cout << fahr;
    celsius = (static_cast<double>(5)/9) * (fahr - 32);
    cout.width(15);
    cout << celsius;
    cout.width(15);
    cout << celsius + 273.15 << endl;
  }
  return 0;
}

