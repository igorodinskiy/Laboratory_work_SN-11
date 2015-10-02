#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

const int n = 4;
const int m = 7;
int i = 0, j = 0, c = 1, a = 1;
double s = 0, p = 1, F = 0;
int b[10][10] = { {1,1}, {1,1}, {1,1} };
double x[10];

void fun2 (double x[]) 
{
	for ( i = 0; i < n; i++ ) 
	{
		x[i] = 0;
		for ( j = 0; j < m; j++ ) 
		{
			x[i] += b[j][i] * b[j][i] + c * b[j][i];
		}
		x[i] *= a;
	}
}

  double fun3 (double x[])
{
	double X;
	fun2(x);
	for( i = 0; i < n; i++ ) X += x[i];       
	return X; 
}

int main() 
{
	fun3 (x);
	for ( i = 0; i < n; i++ ) 
	{
		s += x[i];
		cout << "s*[" << i + 1 << "]=" << s << endl;
		p *= x[i];
		cout << "p*[" << i + 1 << "]=" << p << endl;
	}
	F = a * s / p;
	cout << "F=" << F << endl;
	return 0;
}
