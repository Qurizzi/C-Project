#pragma once
#include <iostream>
#include <vector>
using namespace std;

struct People
{
	string name;
	int id;
	int age;
};

void people_list_info()
{
	People info;
	info.name = "1.Oleh";
	info.id = 1;
	info.age = 25;
	std::cout << info.name << std::endl << "id: " << info.id << "\n" << std::endl;
	info.name = "2.Alex";
	info.id = 2;
	info.age = 22;
	std::cout << info.name << std::endl << "id: " << info.id << "\n" << std::endl;
}

void people()
{
	std::cout << "All info on people:" << std::endl;
	People p;
	p.name = "Oleh";
	p.id = 1;
	p.age = 25;
	std::cout << "\n" << "Info: " << p.name << "\n" << "id: " << p.id << "\n" << "age: " << p.age << std::endl;
	p.name = "Alex";
	p.id = 2;
	p.age = 22;
	std::cout << "\n" << "Info: " << p.name << "\n" << "id: " << p.id << "\n" << "age: " << p.age << std::endl;
}

void people_id_list()
{
}