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
	~Animals() {};
};

class Dog : public Animals
{
public:
	Dog();
};

class Cat : public Animals
{
public:
	Cat();

};

class Student : public Animals
{
public:
	Student();
};