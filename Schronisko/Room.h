#pragma once
#include <string>
#include <iostream>
#include "Animals.h"

using namespace std;

class Room
{
	friend class Employees;
protected:
	int width, lenght, size, hunger = 0;
	double capacity;
	string animal;
	int portion_;
	Dog * Puppy;
	Cat * Kitty;
	Student * Kid;
public:
	Room() {};
	Room(int x, int y);
	void Accomodation();
	~Room() {};
};