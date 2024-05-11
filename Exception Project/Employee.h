// Specification file for the Employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "Exceptions.h"
using namespace std;

class Employee
{
private:
	string name;		// Employee name
	string number;		// Employee number
	string hireDate;	// Hire date

public:
	// Default constructor
	Employee()
		{ name = ""; number = ""; hireDate = ""; }


	// Constructor
	Employee(string aName, string aNumber, string aDate)
	{
		name = aName; number = aNumber; hireDate = aDate;

		int checkNum = stoi(aNumber);//conversion of string to integer

		if (checkNum < 0 || checkNum > 9999) {//logic check for employee number out of range
			throw InvalidEmployeeNumber();
		}
	}

	// Mutators
	void setName(string n)
		{ name = n; }

	void setNumber(string num)
		{ number = num; }

	void setHireDate(string date)
		{ hireDate = date; }

	// Accessors
	string getName() const
		{ return name; }

	string getNumber() const
		{ return number; }

	string getHireDate() const
		{ return hireDate; }
};

#endif