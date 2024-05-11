// Chapter 15, Programming Challenge 1: Employee and ProductionWorker classes
#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"
#include "Exceptions.h"
using namespace std;

// Function prototype
void displayInfo(ProductionWorker);

int main()
{
	try {//first instance to showcase InvalidEmployeeNumber Exception
		ProductionWorker pw("John Jones", "1230000", "10/12/2010", 2, 18.00);
		displayInfo(pw);
	}
	catch (InvalidEmployeeNumber huh) {
		cout << huh.what() << endl;
	}
	try {//second instance to showcase InvalidShift Exception
		ProductionWorker pw("John Jones", "123", "10/12/2010", 3, 18.00);
		displayInfo(pw);
	}
	catch (InvalidShift huh) {
		cout << huh.what() << endl;
	}
	try {//third instance to showcase InvalidPayRate Exception
		ProductionWorker pw("John Jones", "123", "10/12/2010", 2, -18.00);
		displayInfo(pw);
	}
	catch (InvalidPayRate huh) {
		cout << huh.what() << endl;
	}
	return 0;
}

//******************************************************
// The displayInfo function displays a production      *
// worker's employment information.                    *
//******************************************************
void displayInfo(ProductionWorker e)
{
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " 
		 << e.getName() << endl;
	cout << "Employee number: " 
		 << e.getNumber() << endl;
	cout << "Hire date: " 
		 << e.getHireDate() << endl;
	cout << "Shift: " 
		 << e.getShiftName() << endl;
	cout << "Shift number: " 
		 << e.getShiftNumber() << endl;
	cout << "Pay rate: " 
		 << e.getPayRate() << endl;
}