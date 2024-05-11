// Specification file for the ProductionWorker Class
#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "Employee.h"
#include <string>
#include "Exceptions.h"
using namespace std;

class ProductionWorker : public Employee
{
private:
	int shift;	// The worker's shift
	double payRate;	// The worker's hourly pay rate

public:
	// Default constructor
	ProductionWorker() : Employee()
		{ shift = 0; payRate = 0.0; }

	// Constructor
	ProductionWorker(string aName, string aNumber, string aDate,
		int aShift, double aPayRate) : Employee(aName, aNumber, aDate)
	{
		shift = aShift; payRate = aPayRate;
		if (shift > 2 || shift < 1) {//check for invalid shift entered
			throw InvalidShift();
		}
		if (payRate < 0) {//check for negative pay rate
			throw InvalidPayRate();
		}
	}

	// Mutators
	void setShift(int s)
		{ shift = s; }

	void setPayRate(double r)
		{ payRate = r; }

	// Accessors
	int getShiftNumber() const
		{ return shift; }

	string getShiftName() const
		{ if (shift == 1)
			 return "Day";
		  else if (shift == 2)
			 return "Night";
		  else
			return "Invalid";
		}
	double getPayRate() const
		{ return payRate; }
};

#endif