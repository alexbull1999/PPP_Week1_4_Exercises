#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double fahrenheit, celsius, abs_value;

  cout.width(20);
  cout << "Fahrenheit " << " Celsius " << " Absolute Value\n\n";

  cout.setf(ios::fixed);
  cout.precision(2);
  for (fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20) {
    celsius = ((fahrenheit - 32)*5)/9;
    abs_value = celsius + 273.15;

    cout.width(20);
    cout << fahrenheit << " " <<  celsius << " " <<  abs_value << "\n";
  }

  return 0;
}

