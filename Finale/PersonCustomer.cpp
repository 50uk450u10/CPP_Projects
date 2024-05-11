// Chapter 15, Programming Challenge 7: PersonData and CustomerData classes
#include <iostream>
#include <string>
using namespace std;

class PersonData
{
private:
	string lastName;     // The person's last name
	string firstName;    // The person's first name
	string address;      // The person's address
	string city;         // The person's city
	string state;        // The person's state
	string zip;          // The person's ZIP code

public:

	//**********************************************
	// Constructor                                 *
	//**********************************************

	PersonData(string ln, string fn, string addr,
		string c, string s, string z)
	{
		lastName = ln;
		firstName = fn;
		address = addr;
		city = c;
		state = s;
		zip = z;
	}

	//**********************************************
	// Default Constructor                         *
	//**********************************************

	PersonData()
	{
		lastName = "";
		firstName = "";
		address = "";
		city = "";
		state = "";
		zip = "";
	}

	//**********************************************
	// Mutator functions                           *
	//**********************************************

	void setLastName(string ln)
	{
		lastName = ln;
	}

	void setFirstName(string fn)
	{
		firstName = fn;
	}

	void setAddress(string addr)
	{
		address = addr;
	}

	void setCity(string c)
	{
		city = c;
	}

	void setState(string s)
	{
		state = s;
	}

	void setZip(string z)
	{
		zip = z;
	}

	//**********************************************
	// Accessor functions                          *
	//**********************************************

	string getLastName() const
	{
		return lastName;
	}

	string getFirstName() const
	{
		return firstName;
	}

	string getAddress() const
	{
		return address;
	}

	string getCity() const
	{
		return city;
	}

	string getState() const
	{
		return state;
	}

	string getZip() const
	{
		return zip;
	}
};

class CustomerData : public PersonData
{
private:
	int customerNumber;     // Customer number
	bool mailingList;       // Include in mailing list?

public:

	//**********************************************
	// Constructor                                 *
	//**********************************************

	CustomerData(string ln, string fn, string addr,
		string c, string s, string z, int cn,
		bool ml) :
		PersonData(ln, fn, addr, c, s, z)
	{
		customerNumber = cn;
		mailingList = ml;
	}

	//**********************************************
	// Default Constructor                         *
	//**********************************************

	CustomerData() : PersonData()
	{
		customerNumber = 0;
		mailingList = false;
	}

	//**********************************************
	// Mutator functions                           *
	//**********************************************

	void setCustomerNumber(int cn)
	{
		customerNumber = cn;
	}

	void setMailingList(bool ml)
	{
		mailingList = ml;
	}

	//**********************************************
	// Accessor functions                          *
	//**********************************************

	int getCustomerNumber()
	{
		return customerNumber;
	}

	bool getMailingList()
	{
		return mailingList;
	}
};

class RewardCustomer : public CustomerData{
	
public:
	double purchasesAmount;
	bool couponSubscription;

	RewardCustomer() {
		purchasesAmount = 0;
		couponSubscription = false;
	}

	void SetPurchasesAmount(double p) {
		purchasesAmount = p;
	}
	
	void SetCouponSubscription(bool c) {
		couponSubscription = c;
	}

	double GetPurchasesAmount() {
		return purchasesAmount;
	}

	bool GetCouponSubscription() {
		return couponSubscription;
	}
};


////////// Function prototype
void displayCustomer(RewardCustomer);

int main()
{
	RewardCustomer customer3;
	
	customer3.setLastName("Jones");
	customer3.setFirstName("Jenny");
	customer3.setAddress("555 East Street");
	customer3.setCity("Jonesville");
	customer3.setState("VA");
	customer3.setZip("88888");
	customer3.setCustomerNumber(77777);
	customer3.setMailingList(false);
	customer3.SetPurchasesAmount(130.00);
	customer3.SetCouponSubscription(true);
	

	// Display the object's data.
	cout << "Customer #2\n"
		<< "-----------\n";


	displayCustomer(customer3);


	return 0;
}

void displayCustomer(RewardCustomer c)
{
   // Display all the data but mailing list...
	cout << "Last Name: " << c.getLastName() << endl
		<< "First Name: " << c.getFirstName() << endl
		<< "Address: " << c.getAddress() << endl
		<< "City: " << c.getCity() << endl
		<< "State: " << c.getState() << endl
		<< "ZIP: " << c.getZip() << endl
		<< "Customer Number: "
		<< c.getCustomerNumber() << endl
		<< "Purchase Amount: " << c.GetPurchasesAmount() << endl
		<< "Mailing List? ";

	   // Dispaly Yes or No for mailing list.
	   if (c.getMailingList())
			cout << "Yes\n";
	   else
			 cout << "No\n";

	   cout << "Coupon Subscription? ";

	   if (c.GetCouponSubscription())
		   cout << "Yes\n";
	   else
		   cout << "No\n";
   
}
