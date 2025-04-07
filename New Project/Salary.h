#pragma once
#include <iostream>
#include "People.h"
using namespace std;


void salary_total()
{
	int salary;
	int hours;
	int total_salary;
	cout << "Please enter hourly wage: " << endl;
	cin >> salary;
	cout << "Enter the number of hours worked" << endl;
	cin >> hours;
	total_salary = salary * hours;
	cout << "Slay is: " << total_salary << endl;
}

void salary()
{
	cout << "\t Welcome to the salary calculator program!" << endl;
	cout << "Please enter people" << endl;
	people_list_info();
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		salary_total();
		break;
	case 2:
		salary_total();
		break;
	default:
		cout << "ERROR" << endl;
		break;
	}
}