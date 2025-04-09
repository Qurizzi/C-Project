#pragma once
#include <iostream>
#include "People.h"


void salary_total() // command for calculator  salary
{
	double salary;
	double hours;
	float total_salary;
	std::cout << "Please enter hourly wage: " << std::endl;
	std::cin >> salary;
	std::cout << "Enter the number of hours worked: " << std::endl;
	std::cin >> hours;
	total_salary = salary * hours;
	cout << "Slay is: " << total_salary << std::endl;
}

void salary() // salary calculator
{
	std::cout << "\t Welcome to the salary calculator program!" << std::endl;
	std::cout << "Please enter people, or please enter 3 to return to menu " << std::endl;
	people_list_info();
	int a;
	std::cin >> a;
	switch (a)
	{
	case 1:
		salary_total();
		break;
	case 2:
		salary_total();
		break;
	case 3:
		std::cout << "Return to menu..." << std::endl;
		break;
	default:
		std::cout << "ERROR" << std::endl;
		break;
	}
}