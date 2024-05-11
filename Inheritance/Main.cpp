/*
Sean Zamora
4/16/24
ITSE-2331
Write a program that takes in customer information and displays it
*/

#include <iostream>
#include <string>
#include "CustomerData.h"
using namespace std;

int main() {
#pragma region Variables
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;
	int customerNumber;
	bool mailingList = false;
#pragma endregion

#pragma region Input
	cout << "Please enter the first name:" << endl;
	getline(cin, firstName); cout << endl;
	cout << "Please enter the last name:" << endl;
	getline(cin, lastName); cout << endl;
	cout << "Please enter the address:" << endl;
	getline(cin, address); cout << endl;
	cout << "Please enter the city:" << endl;
	getline(cin, city); cout << endl;
	cout << "Please enter the state:" << endl;
	getline(cin, state); cout << endl;
	cout << "Please enter the zip code:" << endl;
	getline(cin, zip); cout << endl;
	cout << "Please enter the phone number:" << endl;
	getline(cin, phone); cout << endl;
	cout << "Please enter the customer number:" << endl;
	cin >> customerNumber; cout << endl;
	cout << "Would the customer like to be added to the mailing list? Press 1 for yes, or 0 for no." << endl;
	cin >> mailingList; cout << endl;
#pragma endregion
	//call and input variables into CustomerData class
	CustomerData customer(lastName, firstName, address, city, state, zip, phone, customerNumber, mailingList);

	cout << "First Name: " << customer.GetFirstName() << endl;
	cout << "Last Name: " << customer.GetLastName() << endl;
	cout << "Address: " << customer.GetAddress() << " " << customer.GetCity() << " " << customer.GetState() << " " << customer.GetZip() << endl;
	cout << "Phone Number: " << customer.GetPhone() << endl;
	cout << "Customer Number: " << customer.GetCustomerNumber() << endl;
	if (customer.GetMailingList()) {//boolean logic
		cout << "The customer is on the mailing list." << endl;
	}
	else {
		cout << "The customer is not on the mailing list." << endl;
	}
}