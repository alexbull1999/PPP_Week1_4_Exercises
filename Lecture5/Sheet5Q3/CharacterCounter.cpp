#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char character;
	int letter;
	int counter = 0;
	int total = 0;
	int blank_counter = 0;
	int tab_counter = 0;

	cout.setf(ios::left);
	cout.width(17);
	cout << "CHARACTER";
	cout << "OCCURRENCES\n\n";
		
	for (letter = 97; letter <= 122; letter++)
	{
		
		ifstream in_stream;
		in_stream.open("CharacterCounter.cpp");
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
			
			else if(static_cast<int>(character) == 32)
			{
				blank_counter++; /* This will run on every loop, so will be 26x too big */
			}	
				
			else if (static_cast<int>(character) == 11)
			{
				tab_counter++; /* This will run on every loop, so will be 26x too big */
			}
		}

		cout.width(17);
		cout << static_cast<char>(letter);
		cout << counter << endl;
		in_stream.close();
		total += counter;
		counter = 0;
	}
	
	cout.width(17);
	cout << "blanks";
	cout << (blank_counter/26) << "\n";
	cout.width(17);
	cout << "tabs";
	cout << (tab_counter/26) << "\n\n";
	cout.width(17);
	cout << "Total characters";
	cout << (total + (blank_counter/26) + (tab_counter/26)) << endl;

	return 0;

}
