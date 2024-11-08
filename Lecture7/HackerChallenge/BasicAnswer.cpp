#include <iostream>

// The usual output of this program is:
// //      Welcome to Hacker Bank
// //      Your balance is -2000 pounds
// //      You are in debt!
// //
// // By modifying the print_welcome() function *and no other parts of the code*
// // can you make it say:
// //      Welcome to Hacker Bank!
// //      Your balance is 1000000 pounds
// //      You are in credit!
// //
// // Advanced challenge: can you do everything you need to in just one 
// // additional line of code?
// // 
// // Code is available from http://www.doc.ic.ac.uk/~wjk/C++Intro/hacker.cpp
// // To obtain it, try a command like
// //    wget 'http://www.doc.ic.ac.uk/~wjk/C++Intro/hacker.cpp' 
// //
// // WARNING: May not work well on MacOS; you're advised to use the lab machines

using namespace std;

void print_welcome() {

	int array[] = {1, 2};

	int n = 0;

	for (n = 0; array[n] != -2000; n++);
	
	array[n] = 1000000;

	

	/* OPTION2: 
	
	int n = 1;
	
	while (array[n] != -2000)
	{
		n++;
	}

	array[n] = 1000000; */

	cout << "Welcome to Hacker Bank!" << endl;
}

int main() {

  int balance = -2000;

  print_welcome();

  cout << "Your balance is " << balance << " pounds" << endl;
  
  if (balance >= 0) {
      cout << "You are in credit!" << endl;
    } else if (balance < 0) {
	    cout << "You are in debt!" << endl;    
	  }
  
  return 0;
}
