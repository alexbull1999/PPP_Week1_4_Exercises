#include <iostream>
#include <fstream>
using namespace std;

const int False = 0;
const int True = 1;
	
int main()
{
	char character;
	char character_after;
	int inside_comment = False;
	ifstream in_stream;
	ofstream out_stream;
	
	/* Output test statement to the screen: */
	cout << "Testing: " << 16/2 << " = " << 4*2 << ".\n\n";
	
	in_stream.open("Sheet5Ex2.cpp");
	out_stream.open("WithoutComments.cpp");
	in_stream.get(character);
	
	for ( ; !in_stream.fail() ; ) /* alternative: 'while (! in_stream.eof())' */
	{
		/* Test to see if a comment is starting. */
		if (inside_comment == False && character == '/') 
		{
			in_stream.get(character_after); 
			if (character_after == '*')	
			inside_comment = True;
			else
				in_stream.putback(character_after); 
		}
		
		if (inside_comment == True && character == '*')
		{
			in_stream.get(character);
			if(character == '/')
			{	
				inside_comment = False;  
				in_stream.get(character); 
			}
		}
		
		if (inside_comment == False)
		{ 
			out_stream.put(character); 
			cout << character;
		}
		in_stream.get(character);
	}
	in_stream.close();
	out_stream.close();	
	return 0;
}
