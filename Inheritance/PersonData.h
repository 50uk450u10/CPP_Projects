#pragma once
#include <iostream>
using namespace std;

class PersonData {
protected:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;

public:
	PersonData() {//constructor

	}
#pragma region Setters
	void SetLastName(string lname) { lastName = lname; }
	void SetFirstName(string fname) { firstName = fname; }
	void SetAddress(string add) { address = add; }
	void SetCity(string c) { city = c; }
	void SetState(string s) { state = s; }
	void SetZip(string z) { zip = z; }
	void SetPhone(string num) { phone = num; }
#pragma endregion

#pragma region Getters
	string GetLastName() { return lastName; }
	string GetFirstName() { return firstName; }
	string GetAddress() { return address; }
	string GetCity() { return city; }
	string GetState() { return state; }
	string GetZip() { return zip; }
	string GetPhone() { return phone; }
#pragma endregion
};