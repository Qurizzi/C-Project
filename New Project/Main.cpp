#include <iostream>
#include "People.h"
#include "Calculator.h"
#include "Salary.h"
// this file not using command "using namespace std"

void printMenu() // function for menu
{
	std::cout << "1.All id" << std::endl;
	std::cout << "2.Peope" << std::endl;
	std::cout << "3.Calculator" << std::endl;
	std::cout << "4.Salary calculator" << std::endl;
	std::cout << "5.Exit" << std::endl;
	std::cout << "Please select a number from the menu: ";
}

void UserSelection() // function for menu
{
	int x;
	std::cin >> x;
	switch (x)
	{
	case 1:
		people_id_list(); //not working :(
		break;
	case 2:
		people(); // information about people (name, id, age)
		break;
	case 3:
		calculator(); // standard calculator
		break;
	case 4:
		salary(); // salary calculator (hourly wage * hours worked)
		break;
	case 5:
		std::cout << "Exiting program..." << std::endl;
		exit(0);
		break;
	default:
		std::cout << "ERROR, please restart program" << std::endl;
		break;
	}
}

int main()
{
	std::cout << "\t\t --Welcome to the Software Development Process Menu--" << std::endl; // start menu
	printMenu();
	UserSelection();
	while (true) // loop for menu
	{
		std::cout << std::endl;
		std::cout << "\t\tMenu" << std::endl;
		printMenu();
		UserSelection();
	}
	return 0;
}