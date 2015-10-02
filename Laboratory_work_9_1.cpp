#include <iostream>
#include <cmath>
#define p(k) tan(k)+log10(a*k+k)

using namespace std;

int main() 
{
	double a = 0.38, x = 0.34, y = 0.98, z = 0.58, F = 0;
	F = ( pow( x, 3.0 / 2.0 ) / log( x ) ) + ( ( x * p( y ) - y * p( z ) ) / pow( x * y, 1.0 / 3.0 ) );
	cout << "F=" << F << endl;
	return 0;
}
