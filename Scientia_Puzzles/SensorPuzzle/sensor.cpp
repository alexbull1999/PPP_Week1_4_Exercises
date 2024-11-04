#include <iostream>
#include <iomanip>

using namespace std;

int sensor_reading() { // will be taken over by a hardware sensor but for
  return 20;           // now we always return a comfortable 20 degrees
}

int main() {

  int total = 0;
  for (int n=1; n<100000000 ; n++) {
    total += sensor_reading();
    if ((n % 100000)==0) {
      float average = total/n;
      cout << setw(20) << "the average of " << setw(20) << n << " readings is " << average << " " << total << endl;      
      if (average > 20.1)
	cout << "# FREEZER ON" << endl;
      if (average < 19.9)
	cout << "# HEATER ON" << endl;
    }
  }

  float x = 100;
  float y = 1000;
  float z = 1e30;
  cout << ((y + x)==y) << endl; 
  cout << ((z + x)==z) << endl; 

  return 0;
}

