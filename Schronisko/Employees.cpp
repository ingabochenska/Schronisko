#include "Employees.h"


Employees::Employees()
{
	staff = "animal caretakers";
	amount = 4;
	cout << "You employ " << amount << " " << staff;
	cout << "They are here to take care of animals";
}

void Employees::feed()
{
	int number;
	cout << "Animals in which loosebox you want to feed?" << endl;
	cin >> number;
	//board of boxes etc
}