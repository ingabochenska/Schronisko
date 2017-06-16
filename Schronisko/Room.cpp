#include "Room.h"

Room::Room(int x)
{ 
	this -> size = x;
	hunger = 1;
	happiness = 2;
}

int Room::Room_Size()
{
	cout << "Now you can choose rooms' size" << endl;
	cout << "Width = "; cin >> width;
	cout << "Lenght = ";  cin >> lenght;
	if (width <= 0 || lenght <= 0 || width > 100 || lenght > 100)
	{
		cout << "Wrong size chosen! My size = 25";
		size = 25;
	}
	else
		size = width*lenght;
	return size;
}

void Room:: Accomodation()
{
	int a;

	cout << "1 - Dogs" << endl << "2 - Cats" << endl << "3 - Students" << endl;
	cin >> a;
	switch (a)
	{
	case 1: 
	{ 
		Dog Dog1;
		animal = Dog1.ret_Type();
		portion_ = Dog1.ret_Portion();
		capacity = size / Dog1.Ret_Space();
		Puppy = new Dog[(int)capacity];
		break;
	}
	case 2: 
	{
		Cat Cat1;
		animal = Cat1.ret_Type();
		portion_ = Cat1.ret_Portion();
		capacity = size / Cat1.Ret_Space();
		Kitty = new Cat[(int)capacity];
		break;
	}
	case 3: 
	{
		Student Student1;
		animal = Student1.ret_Type();
		portion_= Student1.ret_Portion();
		capacity = size / Student1.Ret_Space();
		Kid = new Student[(int)capacity];
		break;
	}
	default: 
	{
		cout << "Wrong number. I will fill this room with students" << endl;
		Student Student1;
		animal = Student1.ret_Type();
		portion_ = Student1.ret_Portion();
		capacity = size / Student1.Ret_Space();
		Kid = new Student[(int)capacity];
	}
	Sleep(2000);
	}

}
void Room:: Next_Day(int i)
{
	if (hunger >= 2)
		happiness=1;
	hunger++;
	happiness--;
	if (happiness <= 0)
		cout << "Well, you suck at it - your animals in room " << i << " aren't happy" << endl;
}

Room:: ~Room()
{
	delete[] Puppy;
	delete[] Kitty;
	delete[] Kid;
	Puppy = 0;
	Kitty = 0;
	Kid = 0;
}