#pragma once
#include <string>
#include <iostream>
#include <windows.h>
#include <time.h>
#include "Room.h"

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
	void feed(Room *r, Magazine &M, int &act);
	void play(Room *r, int &act);
	void fill_Magazine(Magazine &M, int &act);

	~Employees() {};
};
