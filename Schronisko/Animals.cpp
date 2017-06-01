#include "Animals.h"



Animals::Animals()
{
}

double Animals:: Ret_Space()
{
	return space;
}

string Animals::ret_Type()
{
	return type;
}

int Animals::ret_Portion()
{
	return portion;
}

Dog::Dog()
{
	space = 4;
	portion = 2;
	type = "dog";

}

Cat::Cat()
{
	space = 1;
	portion = 1;
	type = "cat";

}

Student::Student()
{
	space = 0, 5;
	portion = 20;
	type = "student";
}