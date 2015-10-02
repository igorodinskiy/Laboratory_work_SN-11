#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	cout << "PROGRAM ONE" << endl;
	int a[20];
	int i = 0;
	for ( i = 0; i < 20; i++ ) a[i] = rand()%100-50;
	cout << "Massif: ";
	for ( i = 0; i < 20; i++ ) cout << a[i] << "; ";
	cout << "\n";
	int b=0;
	cout << "Enter number (from -50 to 50): ";
	cin >> b;
	int count = 0;
	for ( i = 0; i < 20; i++ ) if ( a[i] == b ) count++;
	cout << "The massif is " << count << " items, equal number " << b << endl;
	cout << "\nPROGRAM TWO" << endl;
	if ( a[2] > b * a[1] )
	{
		count = 0;
		for ( i = 0; i < 20; i++ )
		{
			if ( a[i] < 0 ) count++;
		}
		cout << "Number negative items massif: " << count << endl;
	}
	else
	{
		int d = 0;
		d = 0;
		cout << "Number items massif, equal 0: ";
		for ( i = 0; i < 20; i++ )
		{
			if ( a[i] = 0) d++;
		}
		int c = 0;
		if ( c == d ) cout << "0" << endl;
		else cout << d << endl;
	}
	return 0;
}
