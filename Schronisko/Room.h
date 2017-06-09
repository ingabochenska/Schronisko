#pragma once
#include <string>
#include <iostream>
#include "Animals.h"

using namespace std;

class Room
{
	friend class Employees;
protected:
	int width=0, lenght=0, size=0;
	int hunger = 0, happiness=3;
	double capacity=0;
	string animal;
	int portion_=0;
	Dog * Puppy;
	Cat * Kitty;
	Student * Kid;
public:
	Room() {};
	Room (int x);
	int Room_Size();
	void Accomodation();
	~Room();
};