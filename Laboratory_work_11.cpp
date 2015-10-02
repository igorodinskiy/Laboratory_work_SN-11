#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>

using namespace std;

void writeToFile()
{
	string soother;
	string group;
	string numberOfStudents;
	string numberOfPresent;
	string numberOfAbsent;
	ofstream myfile;

	myfile.open("Journal.txt", std::ios_base::app);

	cout << "";
	getline(std::cin, soother);
	myfile << soother + "\t";

	cout << "Enter group: ";
	getline(std::cin, group);
	myfile << group + "\t";

	cout << "Enter number of students: ";
	getline(std::cin, numberOfStudents);
	myfile << numberOfStudents + "\t";

	cout << "Enter number of present students: ";
	getline(std::cin, numberOfPresent);
	myfile << numberOfPresent + "\t";

	cout << "Enter number of absent students: ";
	getline(std::cin, numberOfAbsent);
	myfile << numberOfAbsent + "\n";
	myfile.close();
}

void readFromFile(){
	string line;
	
	ifstream myfile("Journal.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
}

void clearTextFile()
{
	string line;
	char menuItem;
	ofstream myfile("Journal.txt");
	myfile.open("Journal.txt", std::ios_base::trunc);
	myfile.clear();
	myfile.close();
	cout << "File cleared. \n";
	
}
void menu()
{
	char menuItem;
	cout << "Menu \n -W(to write in file)\n -R(to read from file)\n -C(to clear content of file)\n -E(Exit)\n";
	cout << "Select one of them (w || r || c || e): ";
	cin >> menuItem;
	if (menuItem == 'w')
	{
		writeToFile();
	}
	else if (menuItem == 'r')
	{
		readFromFile();
	}
	else if (menuItem == 'c')
	{
		clearTextFile();
	}
	else if (menuItem == 'e')
	{
		exit(1);
	}
	else
	{
		cout << "Error, try again \n\n";
		menu();
	}
}

int main(int argc, char** argv) {	
	menu();
	return 0;
}

