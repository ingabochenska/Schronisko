#include "Room.h"


Room::Room(int x, int y)
{
	size = x*y;
}

void Room:: Accomodation()
{
	int a;
	system("cls");
	cout << "What species do you want to accomodate?"<<endl;
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
	default: cout << "Wrong number" << endl;

	}

}