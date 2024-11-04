#include <iostream>
#include <fstream>

using namespace std; 

int main()
{
	char character;
	ifstream in_stream;
	
	in_stream.open("mainprogramfile.cpp");
	if (in_stream.fail())
	{
		cout << "Sorry, the input file couldn't be opened!\n";
	}

	in_stream.get(character);

	while (!in_stream.eof())
	{
		cout << character;
		in_stream.get(character);
	}

	in_stream.close();

	return 0;

}
