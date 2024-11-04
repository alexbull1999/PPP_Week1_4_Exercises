#include <iostream>
#include <fstream>
using namespace std;

int characters_in_file();
char character_at_position(int number);

int main ()
{
  int count;

  /* find out how many characters are in the file */
  count = characters_in_file();

  /* now run backwards through the file printing the character 
     found at each position */
  for (int number= count; number > 0; number--)
    cout << character_at_position(number);

  return 0;
} 

int characters_in_file() {
  char ch;
  ifstream in_stream;

  int count = 0;

  in_stream.open("Sheet5Q4.cpp");
  in_stream.get (ch);
  while (!in_stream.fail()) {
    count++;
    in_stream.get (ch);
  }
  in_stream.close();

  return count;
}

char character_at_position(int number) {
  char ch;
  ifstream in_stream;

  in_stream.open("Sheet5Q4.cpp");
  
  for (int i=0; i<number; i++)
    in_stream.get(ch);

  in_stream.close();
  return ch;
}
