#include "Employees.h"


Employees::Employees()
{
	system("cls");
	staff = "animal caretakers";
	amount = 4;
	cout << endl<< "You employ " << amount << " " << staff<<endl;
	cout << "They are here to take care of animals" << endl <<endl;
	Sleep(3000);
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
		cout << number << endl;
	}
	if (r[number].animal == "dog")
	{
		if (M.Dog_Food < ((int)r[number].capacity)*r[number].portion_)
			cout << "Not enough dog food in magazine. I recommend to fill it" << endl;
		else
		{ 
		M.Dog_Food -= ((int)r[number].capacity)*r[number].portion_;
		r[number].hunger = 0;
		act--;
		cout << "Animals feeded" << endl;
		}
	}
	else if (r[number].animal == "cat")
	{ 
		if (M.Cat_Food < ((int)r[number].capacity)*r[number].portion_)
			cout << "Not enough cat food in magazine. I recommend to fill it" << endl;
		else
		{
			M.Cat_Food -= ((int)r[number].capacity)*r[number].portion_;
			r[number].hunger = 0;
			act--;
			cout << "Animals feeded" << endl;
		}
	}
	else if (r[number].animal == "student")
	{ 
		if (M.Beer < ((int)r[number].capacity)*r[number].portion_)
			cout << "Not enough beer in magazine. I recommend to fill it" << endl;
		else
		{
			M.Beer -= ((int)r[number].capacity)*r[number].portion_;
			r[number].hunger = 0;
			act--;
			cout << endl << "Animals feeded" << endl;
		}
	}
	else 
		cout << "Empty cage" << endl;
	Sleep(2000);
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
		cout << number << endl;
	}
	r[number].happiness = 3;
	cout << "Played." << endl;
	act--;
	Sleep(2000);
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
	case 3: M.Beer += 80; break;
	default: cout << "Wrong choise" << endl; Sleep(1500); act++;
	}
	
	act--;
}