#include <iostream>

using namespace std;

int main() 
{
	int n = 0;
	cout << "Enter number  apartament: ";
	cin >> n;
	switch (n)
	{
		case 1:;
		case 2:;
		case 3:;
		case 4: cout << "This first floor.\n"; break;
		case 5:;
		case 6:;
		case 7:;
		case 8: cout << "This second floor.\n"; break;
		case 9:;
		case 10:;
		case 11:;
		case 12: cout << "This third floor.\n"; break;
		case 13:;
		case 14:;
		case 15:;
		case 16: cout << "This fourth floor.\n"; break;
		case 17:;
		case 18:;
		case 19:;
		case 20: cout << "This fifth floor.\n"; break;
		default: cout << "Error.\n";
	}
	return 0;
}
