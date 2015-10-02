#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double y = 0, x0 = 2, xk = 5, dx = 0.3, x = 0;
	cout << "Beginning interval: X0=2" << endl;
	cout << "End interval: Xk=5" << endl;
	cout << "Step: dX=0.3" << endl;
	cout << "\nPROGRAM ONE" << endl;
	x = x0;
	while ( x <= xk )
	{
		y = 5 * x + sin( x ) + ( log10( x ) / ( 4 + x ) );
	  	cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	  	x += dx;
	}
	cout << "y=" << y << endl;
	cout << "\nPROGRAM TWO" << endl;
	y = 0, x0 = 2, xk = 5, dx = 0.3, x = 0;
	x=x0;
	do
	{
	  	y = 5 * x + sin( x ) + ( log10( x ) / ( 4 + x ) );
		cout << "x=" << x << endl;
	  	cout << "y=" << y << endl;
		x += dx;
	}
	while ( x <= xk );
	cout << "y=" << y << endl;
	return 0;
}
