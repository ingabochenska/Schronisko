#pragma once
#include <string>
#include <iostream>

using namespace std;
class Employees
{
protected:
	string staff;
public:
	Employees();
	~Employees() {};
};

class Animal_Caretaker: public Employees
{

public:
	Animal_Caretaker();

};

