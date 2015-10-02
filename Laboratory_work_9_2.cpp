#include <iostream>
#include <cmath>

using namespace std;

double a = 0.38;
double p(double k)
{
	double p;
	p = tan( k ) + log10( a * k + k );
	return p; 
}

int main() 
{
	double x = 0.34, y = 0.98, z = 0.58, F = 0;
	F = ( pow( x, 3.0 / 2.0 ) / log( x ) ) + ( ( x * p( y ) - y * p ( z ) ) / pow( x * y, 1.0 / 3.0 ) );
	cout << "F=" << F << endl;
	return 0;
}
