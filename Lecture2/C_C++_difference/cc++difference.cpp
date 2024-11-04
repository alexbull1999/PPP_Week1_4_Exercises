/* This program intends to calculate the answer to the puzzle "What is the difference between C and C++; and conversely what is the difference between C++ and C */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int C = 1;
  int output1, output2;
  output1 = (C++) - C;
  output2 = C - (C++);

  cout << "The difference between C++ and C is: " << output1 << "\n";
  cout << "The difference between C and C++ is: " << output2 << "\n";
  
  return 0;
}
