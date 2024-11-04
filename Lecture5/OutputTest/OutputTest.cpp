/* This program tests my understanding of input and output commands, and use of flags */

/* Set Headers */

#include <iostream>
#include <fstream>

using namespace std;

/* write int main */

int main()
{
	cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";

	/*Open input file stream */
	ifstream in_stream;
	in_stream.open("OutputTest.cpp");
	if (in_stream.fail())
	{
		cout << "Sorry, the file couldn't be opened\n";
		exit(1);
	}

	/* Open output file stream */
	ofstream out_stream;
	out_stream.open("WithoutComments.cpp");

	while(!in_stream.eof())
	{
		
	/* Initialize variables */
	int flag;
	char character;
	int slash = 47;

		in_stream.get(character);
		if (static_cast<int>(character) == 47) /* Check if character is a forwardslash to indicate comment */
		{
			in_stream.get(character);

			if (static_cast<int>(character) == 42)
			{
				flag = 1; 	
			}

			else
			{
				in_stream.putback(character);
				in_stream.putback(static_cast<char>(slash));
				flag = 0;
				in_stream.get(character);
			}
		}

		else
		{
			flag = 0;
		}

		if (flag == 0)
		{
			cout << character;
			out_stream.put(character);
		}

		else
		{
			in_stream.get(character); /* iterate until end of comment reached */
			while (static_cast<int>(character) != 47)
			{
				in_stream.get(character);
			}
			in_stream.get(character);
			flag = 0;
			in_stream.putback(character);
	
		}
	}

	out_stream.close();
	in_stream.close();

	return 0;
}

