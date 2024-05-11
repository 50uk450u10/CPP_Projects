#pragma once
#include "PersonData.h"
#include <iostream>
using namespace std;

class CustomerData : public PersonData {//class inheriting from PersonData
protected:
	int customerNumber;
	bool mailingList = false;
	
public:
	CustomerData() {//default constructor

	}
	//parameter constructor
	CustomerData(string l, string f, string a, string c, string s, string z, string p, int cusNum, bool mail) {
		lastName = l;
		firstName = f;
		address = a;
		city = c;
		state = s;
		zip = z;
		phone = p;
		customerNumber = cusNum;
		mailingList = mail;
	}

	void SetCustomerNumber(int num) { customerNumber = num; }
	void SetMailingList(bool mail) { mailingList = mail; }
	void SetLastName(string lname) { lastName = lname; }
	void SetFirstName(string fname) { firstName = fname; }
	void SetAddress(string add) { address = add; }
	void SetCity(string c) { city = c; }
	void SetState(string s) { state = s; }
	void SetZip(string z) { zip = z; }
	void SetPhone(string num) { phone = num; }

	int GetCustomerNumber() { return customerNumber; }
	bool GetMailingList() { return mailingList; }
	string GetLastName() { return lastName; }
	string GetFirstName() { return firstName; }
	string GetAddress() { return address; }
	string GetCity() { return city; }
	string GetState() { return state; }
	string GetZip() { return zip; }
	string GetPhone() { return phone; }
};