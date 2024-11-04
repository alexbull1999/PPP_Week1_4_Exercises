/*This program asks the user to input a number 'x', that is to be raised by any positive power 'n', also to be inputted by the user*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

  /* Ask for the input number and the power by which it is to be raised*/

  double base, power, counter, answer = 1;

  cout << "Enter the base number which is to be raised to a power: ";
  cin >> base;

  cout << "Enter the (positive)  power by which you want to raise your base: ";
  cin >> power;

  for ( counter = 1 ; counter <= power; counter++) {

    answer *= base;
    
  }

  cout.setf(ios::fixed);
  cout.precision(2);
  cout << base << " to the power of " << power << " is: " << answer << "\n";

  return 0;
}



