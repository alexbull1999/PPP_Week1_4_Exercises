#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

int main()
{
	char character;
	int letter;
	int counter = 0;

	cout.setf(ios::left);
	cout.width(17);
	cout << "CHARACTER";
	cout << "OCCURRENCES\n\n";

	for (letter = 97; letter <= 122; letter++)
	{
		
		ifstream in_stream;
		in_stream.open("Sheet4Ex5.cpp");
		if (in_stream.fail())
		{	
			cout << "Sorry, the file couldn't be opened!\n";
			exit(1);
		}	

		while (!in_stream.eof())
		{
			in_stream.get(character);
			if (static_cast<int>(character) == letter)
			{
				counter++;
			}
		}

		cout.width(17);
		cout << static_cast<char>(letter);
		cout << counter << endl;
		in_stream.close();
		counter = 0;
	}
	return 0;
}
