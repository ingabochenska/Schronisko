#include "Animals.h"
#include "Employees.h"
#include "Room.h"
#include <string>
#include <iostream>

using namespace std;



int main()
{
	Magazine Magazine1{ 70, 100, 1000 };

	Room *Room_;
	for (int i = 0; i < 10; i++)
	{
		Room_ = new Room[i];
		Room_[i].Accomodation();
	}
	Employees Employees;
	//wyb�r funkcji tutaj
	Employees.feed(Room_, Magazine1);
	Employees.fill_Magazine(Magazine1);
	
	//+ konstruktor rooma z size
	//po ka�dym dniu g��d si� zwi�ksza o 1, gdy 3 - zwierz� umiera
	//doda� licznik czynno�ci - max 5 na pracownika (b�dzie czterech(?))

	return 0;
}
