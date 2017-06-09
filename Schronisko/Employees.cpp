#include "Employees.h"


Employees::Employees()
{
	staff = "animal caretakers";
	amount = 4;
	cout << endl<< "You employ " << amount << " " << staff<<endl;
	cout << "They are here to take care of animals"<<endl;
}

void Employees::feed(Room *r, Magazine &M, int &act)
{
	int number;
	cout << "Animals in which room you want to feed? (0-9)" << endl;
	cin >> number;
	if (number < 0 || number >= 10)
	{
		cout << "Wrong number chosen! My random number = ";
		srand(time(NULL));
		number = rand() % 10;
	}
	if (r[number].animal == "dog")
	{
		M.Dog_Food -= ((int)r[number].capacity)*r[number].portion_;
		act--;
	}
	if (r[number].animal == "cat")
	{ 
		M.Cat_Food -= ((int)r[number].capacity)*r[number].portion_;
		act--;
	}
	if (r[number].animal == "student")
	{ 
		M.Beer -= ((int)r[number].capacity)*r[number].portion_;
		act--;
	}
	else 
		cout << "Empty cage" << endl;

	r[number].hunger = 0;
}

void Employees::play(Room *r, int &act)
{
	int number;
	cout << "Animals in which room you want to play with? (0-9)" << endl;
	cin >> number;
	if (number < 0 || number >= 10)
	{
		cout << "Wrong number chosen! My random number = ";
		srand(time(NULL));
		number = rand() % 10;
	}
	r[number].happiness = 3;
	act--;

}

void Employees::fill_Magazine(Magazine &M, int &act)
{
	int a;
	cout << "Which resources do you want to order from supplier?"<<endl;
	cout << "1 - DogFood\n2 - CatFood\n3 - Beer"<<endl;
	cin >> a;
	switch (a)
	{
	case 1: M.Dog_Food += 35; break;
	case 2: M.Cat_Food += 35; break;
	case 3: M.Beer += 35; break;
	default: cout << "Wrong choise" << endl; act++;
	}
	act--;
}