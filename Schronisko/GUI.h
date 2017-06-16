#pragma once
#include <iostream>
#include <iomanip>
#include "Room.h"
#include "Employees.h"

using namespace std;

class GUI
{
public:
	GUI();
	void menu1();
	void menu2(Room *r, Magazine &M, int act);
	~GUI();
};

