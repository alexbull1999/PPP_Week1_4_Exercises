/* This program prints out a conversion table of temperatures.*/

#include <iostream>
using namespace std;

const int LOWER = 0;
const int UPPER = 300;
const int STEP = 20;

int main()
{
  int fahr = LOWER;
  double celsius = 0;

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

