#pragma once
#include <string>
#include <iostream>

using namespace std;
class Employees
{
protected:
	string staff;
	int amount;
public:
	Employees();
	void feed();


	~Employees() {};
};