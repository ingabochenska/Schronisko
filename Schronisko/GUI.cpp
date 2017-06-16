#include "GUI.h"



GUI::GUI()
{
}

void GUI:: menu1()
{
	cout << "Menu" << endl;
	cout << "____________" << endl;
	cout << "1. Feed animals" << endl;
	cout << "2. Play with animals" << endl;
	cout << "3. Fill your magazine" << endl;
	cout << "4. End game" << endl<<endl;
}

void GUI:: menu2(Room *r, Magazine &M, int act)
{
	system("cls");
	cout << "Magazine: " << endl;
	cout << "- dog food: " << M.Dog_Food << endl;
	cout << "- cat food: " << M.Cat_Food << endl;
	cout << "- beer: " << M.Beer << endl;
	cout << "_________________" << endl << endl;

	cout << "Condition of your animals" << endl;
	cout << "Room || Animals | Hunger | Happiness" << endl;
	cout << "____________________________________" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout <<setw(4)<< i <<" || "<< setw(7)<<r[i].animal<< " | " <<setw(6)<< r[i].hunger << " | "<<setw(9)<< r[i].happiness<<endl;
	}
	cout << endl;
	cout << "Today you can do " << act << " activities yet" << endl;
}

GUI::~GUI()
{
}
