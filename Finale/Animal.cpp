#include <iostream>
using namespace std;

class InvalidLegs : exception {
private:
	string exceptionMessage = "Exception!: Legs must be a positive number!";

public:
	const char* what() const throw()
	{
		return exceptionMessage.c_str();
	}
};

class Animal
{
private: 
	int legs = 0;
	bool swim = false;
public:
	Animal()
	{
		legs = 0;
	}
	virtual void makeSound() 
	{ 
		cout << "rawr" << endl; 
	}
	int getLegs()
	{
		try {
			if (legs < 0) {
				throw InvalidLegs();
			}
		}
		catch (InvalidLegs huh) {
			cout << huh.what() << endl;
		}
		return legs;
	}
	~Animal() {

	}
};

class Monkey : public Animal {
private:
	int legs = 0;
	bool swim = false;
public:
	Monkey() {
		
	}
	Monkey(int l) { legs = l; }
	virtual void makeSound()
	{
		cout << "Monkey Sound" << endl;
	}
	int getLegs()
	{
		try {
			if (legs < 0) {
				throw InvalidLegs();
			}
		}
		catch (InvalidLegs huh) {
			cout << huh.what() << endl;
		}
		return legs;
	}
	~Monkey() {

	}
};

class SpiderMonkey : public Monkey {
private:
	int legs = 0;
	bool swim = false;
public:
	SpiderMonkey() {
		
	}

	SpiderMonkey(int l) { legs = l; }

	virtual void makeSound()
	{
		cout << "Spider Monkey Sound" << endl;
	}
	int getLegs()
	{
		try {
			if (legs < 0) {
				throw InvalidLegs();
			}
		}
		catch (InvalidLegs huh) {
			cout << huh.what() << endl;
		}
		return legs;
	}
	~SpiderMonkey() {

	}
};

class Kangaroo : Animal {
private:
	int legs = 0;
	bool swim = false;
public:
	Kangaroo() {
		
	}
	Kangaroo(int l) { legs = l; }
	virtual void makeSound()
	{
		cout << "Roo sound" << endl;
	}
	int getLegs()
	{
		try {
			if (legs < 0) {
				throw InvalidLegs();
			}
		}
		catch (InvalidLegs huh) {
			cout << huh.what() << endl;
		}
		return legs;
	}
	~Kangaroo() {

	}
};

int main()
{
	Animal animal;
	cout << "Animal: ";
	animal.makeSound();
	cout << animal.getLegs() << endl;

	Monkey monkey(2);
	cout << "Monkey: ";
	monkey.makeSound();
	cout << monkey.getLegs() << endl;

	Monkey badMonkey(-2);
	cout << "Monkey: ";
	badMonkey.makeSound();
	cout << badMonkey.getLegs() << endl;

	SpiderMonkey goodMonkey(3);
	cout << "Spider Monkey: ";
	goodMonkey.makeSound();
	cout << goodMonkey.getLegs() << endl;

	Kangaroo goodKanga(1);
	cout << "Kangaroo: ";
	goodKanga.makeSound();
	cout << goodKanga.getLegs() << endl;
}