#pragma once
#include <string>
#include <iostream>
#include "Room.h"
#include <time.h>

using namespace std;

struct Magazine
{
	int Dog_Food, Cat_Food, Beer;
};

class Employees
{

protected:
	string staff;
	int amount;
public:
	Employees();
	void feed(Room *r, Magazine &M);// w mainie bêdzie przekazana tablica pomieszczeñ + sprawdzenie czy r nie jest za du¿e/za ma³e
	void fill_Magazine(Magazine &M);

	~Employees() {};
};