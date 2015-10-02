#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	double i = 0, a = 2.1, s = 0, n = 7;
	cout << "a=2.1" << endl;
	cout << "Number cycle: 7" << endl;
	for ( i = 0; i <= n; i++ ) s += i * i + a * i;
	cout << "sum="<< s << endl;
	return 0;
}
