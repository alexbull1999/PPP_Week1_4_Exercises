/* This was the pretty sample answer code, simpler than my version*/

#include <iostream>
using namespace std;

int main() 
{	
	char letter = 'a'; 

	/* prompt user for letter */
	cout << "This program displays upper and lower case\n";
	cout << "versions of any letter typed from the keyboard.\n\n";
	cout << "Type in a letter and press RETURN: ";
	cin >> letter;
	cout << "\n";

	/* print the appropriate message */
	if (letter >= 65 && letter <= 90) {
		cout << "The lower case character corresponding to '" << letter << "' is '";
		cout << static_cast<char>(letter + 32) << "'.\n";    /* char is used here as a type cast */
	}
	else if (letter >= 97 && letter <= 122) {
		cout << "The upper case character corresponding to '" << letter << "' is '";
		cout << static_cast<char>(letter - 32) << "'.\n";    /* again, char is used as a type cast */
	}
	else
		cout << "'" << letter << "' is not a letter.\n";
	
	return 0;
}
