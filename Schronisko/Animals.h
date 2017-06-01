#pragma once
#include <string>
#include <iostream>

using namespace std;

class Animals
{
protected:
	double space =0;
	int portion;
	string type ="type of the animal";
public:
	Animals();
	double Ret_Space();
	string ret_Type();
	int ret_Portion();
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