#include "Animals.h"
#include "Employees.h"
#include "Room.h"
#include "GUI.h"
#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int Size, activities = 15, choise, day=1;
	GUI Gui;
	Magazine Magazine1{ 70, 100, 1000 };
	cout << "Welcome to your Animal Shelter. Take good care of your animals" << endl;
	Sleep(3000);
	Room *Room_ = new Room[10];
	Size = Room_[0].Room_Size();
	for (int i = 0; i < 10; i++)
	{
		system("cls");
		Room_[i] = *new Room(Size);
		cout << "What species do you want to accomodate in room " << i << " ?" << endl;
		Room_[i].Accomodation();
	}
	Employees Employees;
	
	do {
		system("cls");
		cout << "It is day " << day << endl;
		Sleep(4000);
		for (activities = 15; activities > 0;)
		{
			Gui.menu2(Room_, Magazine1, activities);
			Gui.menu1();

			cout << "What do you want to do? ";
			cin >> choise;
			switch (choise)
			{
			case 1:
			{
				Employees.feed(Room_, Magazine1, activities);
				break;
			}
			case 2:
			{
				Employees.play(Room_, activities);
				break;
			}
			case 3:
			{
				Employees.fill_Magazine(Magazine1, activities);
				break;
			}
			case 4:
			{
				cout << "Game over" << endl;
				return 0;
			}
			default:
			{
				cout << "Wrong naumber, try again" << endl;
				Sleep(2000);
			}
			}

		}
		day++;
		for (int i = 0; i < 10; i++)
		{
			Room_[i].Next_Day(i);
		}
		

	} while (day<30);

	return 0;
}
