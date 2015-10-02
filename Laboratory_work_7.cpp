#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	cout << "PROGRAM ONE" << endl;
	int counter = 0, m = 5, n = 4, b[m][n], i = 0, j = 0;
	for ( i = 0; i < m; i++ ) for ( j = 0; j < n; j++ ) b[i][j] = rand()%100-50;
	cout << "Massif B:" << endl;
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ ) cout << b[i][j] << "\t";
		cout << "\n\n";
	} 
	cout << "\nVector:\nX(";
	for ( i = 0; i < m; i++ )
	{
		counter = 0;
		for ( j = 0; j < n; j++ ) if ( b[i][j] > 0 ) counter++;
		cout << counter;
		if ( i < m - 1 ) cout << ", ";
	}
	cout << ")\n" << endl;
	cout << "PROGRAM TWO" << endl;
	m = 7, n = 6, counter = 0;
	int a[m][n];
	for ( i = 0; i < m; i++ ) for ( j = 0; j < n; j++ ) a[i][j] = rand()%100-50;
	cout << "Massif A:\n";
	for ( i = 0; i < m; i++ )
	{
		for ( j = 0; j < n; j++ ) cout << a[i][j] << "\t";
		cout << "\n\n";
	}
	counter = 0;
	for ( i = 0; i < m; i++ ) for ( j = 0; j < n; j++ ) if ( a[i][j] > 0 ) counter++;
	cout << "\nNumber positive items massif A:" << counter << endl;
	return 0;
}
