#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(int argc, char** argv) 
{
	int n = 0, i = 0, N = 100;
	cout << "Enter text: ";
	char str[N];
	fgets ( str, N, stdin );
	for ( i = 0; str[i] != 0; i++ ) if ( !isdigit(str[i]) && !isalpha(str[i]) ) n++;
	if ( n > 1 ) cout << "Text have symbols except letters and number." << endl;
	else cout << "Text do not have symbols except letters and number." << endl;
	return 0;
}
