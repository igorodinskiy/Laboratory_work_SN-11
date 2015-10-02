#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double a = 0, c = 1.231, d = 1.152, x1 = 0.275, x2 = 4.598, y = 0.637;
	cout << "C=1.231, D=1.152\n" << endl;
	cout << "PROGRAM ONE" << endl;
	cout << "x=0.275, y=0.637" << endl;
	if ( x1 < y ) a = c * pow( ( x1 + y ), 1.0 / 3.0 );
	else a = d * exp( x1 * y );
	cout << "A=" << a << endl;
	cout << "\nPROGRAM TWO" << endl;
	cout << "x=4.598, y=0.637" << endl;
	a = 0;
	if ( x2 < y ) a = c * pow( ( x2 + y ), 1.0 / 3.0);
	else a = d * exp( x2 * y );
	cout << "A=" << a << endl;
	return 0;
}
