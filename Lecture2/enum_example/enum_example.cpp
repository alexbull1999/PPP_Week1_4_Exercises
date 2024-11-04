#include <iostream>
#include <iomanip>

using namespace std;

enum Weekday {MON=0, TUES=1, WEDS=2, THURS=3, FRI=4, SAT=5, SUN=6};

void increment(Weekday &w) {
  w = (Weekday) ( ((int) w + 1) % 7);
}

void print_weekday(Weekday w) {
  switch(w) {
  case MON:
    cout << "Monday"; break;
  case TUES:
    cout << "Tuesday"; break;
  case WEDS:
    cout << "Wednesday"; break;
  case THURS:
    cout << "Thursday"; break;
  case FRI:
    cout << "Friday"; break;
  case SAT:
    cout << "Saturday"; break;
  case SUN:
    cout << "Sunday"; break;
  default:
    cout << "Other day";
  }
  cout << endl;
}

ostream &operator<<(ostream &out, const Weekday &day) {
  switch(day) {
  case MON:
    cout << "Monday"; break;
  case TUES:
    cout << "Tuesday"; break;
  case WEDS:
    cout << "Wednesday"; break;
  case THURS:
    cout << "Thursday"; break;
  case FRI:
    cout << "Friday"; break;
  case SAT:
    cout << "Saturday"; break;
  case SUN:
    cout << "Sunday"; break;
  default:
    cout << "Other day";
  }
  return out;
  }

//post-increment --> today++
Weekday operator++(Weekday &day, int)
{
  Weekday result = day;
  day = static_cast<Weekday>((static_cast<int>(day)+1) % 7);
  return result;
}

//pre-increment --> ++today
Weekday operator++(Weekday &day)
{
  day = static_cast<Weekday>((static_cast<int>(day) + 1) % 7);
  return day;
}

int main(){

  Weekday today = WEDS, shopping_day = THURS;

  cout << (int) today << endl;

  Weekday &funday = today; //funday is another name for today
  //funday is a reference to today

  funday = SUN;
  print_weekday(today);

  cout << ++today <<endl;

  cout << today <<endl;

  return 0;
}


    
