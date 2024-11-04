/* This program finds the corresponding upper case character to lower case characters according to the ASCII system, and vice-versa*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

  char character;
  int asciinum, difference, lcoutput, ucoutput;

  cout << "Input a single character in upper or lower case: " << "\n";
  cin >> character;

  asciinum = character;

  if(asciinum >= 65 && asciinum <= 97) {
    difference = asciinum - 65;
    lcoutput = difference + 97;
    cout << "The lower case character corresponding to " << character;
    cout << " is " << static_cast<char>(lcoutput) << "\n";
  }
  else if(asciinum >= 97 && asciinum <= 122) {
    difference = asciinum - 97;
    ucoutput = difference + 65;
    cout << "The upper case character corresponding to " << character;
    cout << " is " << static_cast<char>(ucoutput) << "\n";
  }
  else {
    cout << character << " is not a letter " << "\n";
  }

  return 0;
}

    
    
