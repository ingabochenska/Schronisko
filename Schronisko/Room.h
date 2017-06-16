#pragma once
#include <string>
#include <iostream>
#include <windows.h>
#include "Animals.h"

using namespace std;

class Room
{
	friend class Employees;
	friend class GUI;
protected:
	int width=0, lenght=0, size=0;
	int hunger, happiness;
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
	void Next_Day(int i);
	~Room();
};