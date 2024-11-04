#include<iostream>
#include<cstring>

using namespace std;

int main() {

	cout << (bool)70 << endl;
	cout << (bool)(-70) << endl;
	cout << (bool)70 << endl;
	cout << (bool)0 << endl;
	cout << (bool)(strcmp(".", ".")) << endl;
	cout << (bool)(strcmp("fox", ".")) << endl;
	cout << (bool)(strcmp(".", "fox")) << endl;


	return 0;
}
