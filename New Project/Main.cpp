#include <iostream>
#include "People.h"
#include "Calculator.h"
#include "Salary.h"
using namespace std;

void printMenu()
{
	cout << "\t\t --Welcome to the Software Development Process Menu--" << endl;
	cout << "1.All id" << endl;
	cout << "2.Peope" << endl;
	cout << "3.Calculator" << endl;
	cout << "4.Salary calculator" << endl;
	cout << "5.Exit" << endl;
	cout << "Please select a number from the menu: ";
}

void UserSelection()
{
	int x;
	cin >> x;
	switch (x)
	{
	case 1:

		break;
	case 2:
		people();
		break;
	case 3:
		calculator();
		break;
	case 4:
		salary();
		break;
	case 5:
		cout << "Exiting program..." << endl;
		exit(0);
		break;
	default:
		cout << "ERROR, please restart program" << endl;
		break;
	}
}

int main()
{
	printMenu();
	UserSelection();
	return 0;
}