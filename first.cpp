#include <iostream>
using namespace std;

int main()
{
//	cout << "Hello World!\n";
	string name;
	cout << "Õòî?\t";
	cin >> name;
	cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAUGH, " << name << ".\n";
	
	string triangle = "";
	for (int i = 0; i < 50; i++) {
		cout << triangle << "\\\n";
		triangle += "[";
	}
	return 0;
}


