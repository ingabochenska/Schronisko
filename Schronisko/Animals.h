#pragma once
#include <string>
#include <iostream>

using namespace std;

class Animals
{
protected:
	double space =0;
	string type ="type of the animal";
public:
	Animals();
	virtual void Fill_box() {};//the method calculates how many animals the box can hold
	~Animals() {};
};

class Dog : public Animals
{
public:
	Dog();
	void Fill_box();
};

class Cat : public Animals
{
public:
	Cat();
	void Fill_box();

};

class Student : public Animals
{
public:
	Student();
	void Fill_box();
};