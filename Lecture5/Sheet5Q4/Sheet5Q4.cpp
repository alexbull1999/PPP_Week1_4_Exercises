#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char character;
	int count = 0;

	
	ifstream in_stream;

	in_stream.open("Sheet5Q4.cpp");
	in_stream.get(character);

	for ( ; ! in_stream.fail() ;  )
	{
		count++;	
		in_stream.get(character);
	}
	in_stream.close();

	ifstream new_stream;
	new_stream.open("Sheet5Q4.cpp");

	for ( ; count > 0; )
	{		
		new_stream.seekg((count-1)); /* SeekG was a good solution but not used by example answer */
		new_stream.get(character);
		cout << character;
		count--;	
	}

	cout << "\n\n";

	new_stream.close();

	return 0;

}
