#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double g = 0, m = 0, y = 0, a = 0.47, b = 0.98, x = 0.12, r = 8.11, k = 3.45;
	cout << "PROGRAM ONE" << endl;
	cout << "r=8.11, k=3.45" << endl;
	g = sin( r + 3 * pow( k, 2 ) ) - sqrt( r + 4 * k );
	m = pow( k - ( 12 * ( r - 4 ) / ( 1 + 3 * k ) ), 2 ) + k;
	cout << "g=sin(r+3*pow(k,2))-sqrt(r+4*k)\ng=" << g << "\nm=pow(k-(12*(r-4)/(1+3*k)),2)+k\nm=" << m << "\n" << endl;
	cout << "PROGRAM TWO" << endl;
	cout << "a=0.47, b=0.98, x=0.12" << endl;
	y = asin( x ) * pow( tan( a * x ), 2) - log10( 2 * x ) + ( exp( b * x ) / pow( x, 1.0 / 3.0) );
	cout << "y=asin(x)*pow(tan(a*x),2)-log10(2*x)+(exp(b*x)/pow(x, 1.0/3.0))\ny=" << y << endl;
	return 0;
}
