#pragma once
#include <iostream>
using namespace std;

void calculator()
{
	cout << "\n Welcome to the calculator program!" << endl;
	cout << "Please enter two numbers: " << endl;
	double a, b;
	cin >> a >> b;
	cout << "Please select an operation (+, -, *, /): " << endl;
	char operation;
	cin >> operation;
	double result;
	switch (operation)
	{
	case '+':
		result = a + b;
		cout << "The result is: " << result << endl;
		break;
	case '-':
		result = a - b;
		cout << "The result is: " << result << endl;
		break;
	case '*':
		result = a * b;
		cout << "The result is: " << result << endl;
		break;
	case '/':
		if (b != 0)
		{
			result = a / b;
			cout << "The result is: " << result << endl;
		}
		else
		{
			cout << "Error: Division by zero!" << endl;
			return;
		}
		break;
	}
}