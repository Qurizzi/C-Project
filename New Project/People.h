#pragma once
#include <iostream>
using namespace std;

struct People
{
	string name;
	int id;
	int age;
};

void people()
{
	People p1;
	p1.name = "Oleh";
	p1.id = 1;
	p1.age = 25;
	People p2;
	p2.name = "Alex";
	p2.id = 2;
	p2.age = 22;
}

void people_list_info()
{
	People info;
	info.name = "Oleh";
	info.id = 1;
	info.age = 25;
	cout << info.name << endl << "id: " << info.id << endl << "age: " <<  info.age << "\n" << endl;
	info.name = "Alex";
	info.id = 2;
	info.age = 22;
	cout << info.name << endl << "id: " << info.id << "\n" << endl;
}

void id_list()
{
	People list;
	list.id = 1;
	cout << list.id << endl;
	list.id = 2;
	cout << list.id << endl;
}
