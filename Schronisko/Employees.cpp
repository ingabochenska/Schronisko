#include "Employees.h"


Employees::Employees()
{
	staff = "animal caretakers";
	amount = 4;
	cout << "You employ " << amount << " " << staff;
	cout << "They are here to take care of animals";
}

void Employees::feed(Room *r, Magazine &M)
{
	int number;
	cout << "Animals in which room you want to feed?" << endl;
	cin >> number;
	if (r[number].animal == "dog")
		M.Dog_Food -= ((int)r[number].capacity)*r[number].portion_;
	if (r[number].animal == "cat")
		M.Cat_Food -= ((int)r[number].capacity)*r[number].portion_;
	if (r[number].animal == "student")
		M.Beer -= ((int)r[number].capacity)*r[number].portion_;
	else 
		cout << "Empty cage" << endl;

	r[number].hunger = 0;
}

void Employees::fill_Magazine(Magazine &M)
{
	int a;
	cout << "Which resources do you want to order from supplier?";
	cin >> a;
	switch (a)
	{
	case 1: M.Dog_Food += 35;
	case 2: M.Cat_Food += 35;
	case 3: M.Beer += 35;
	default: cout << "Wrong choise" << endl;
	}
}