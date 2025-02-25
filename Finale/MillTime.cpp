// MillTIme.cpp
#include <iostream>
using namespace std;
class Time
{
protected:
	int hour;
	int min;
	int sec;
public:
	Time(int h, int m, int s)
	{
		hour = h; min = m; sec = s;
	}

	int getHour()
	{
		return hour;
	}

	int getMin()
	{
		return min;
	}

	int getSec()
	{
		return sec;
	}
};

class BadSeconds : public exception{
private:
	string exceptionMessage = "\nException!: Seconds must be in the range 0 - 59.";

public:
	const char* what() const throw()
	{
		return exceptionMessage.c_str();
	}
};

class BadHour : public exception{
private:
	string exceptionMessage = "\nException!: Hours must be in the range 0 - 2359.";

public:
	const char* what() const throw()
	{
		return exceptionMessage.c_str();
	}
};

class MilTime : public Time
{
private:
	int milHours;
	int milSeconds;
public:
	MilTime(int h = 0, int s = 0) : Time(0, 0, s)
	{
		try {
			if (h < 0 || h > 2359) {
				throw BadHour();
			}
			milHours = h;
			milSeconds = s;
			convert();
		}
		catch (BadHour huh) {
			cout << huh.what() << endl;
		}

		try {
			if (s < 0 || s > 59)
			{
				throw BadSeconds();
			}
				milSeconds = 0;
		}
		catch (BadSeconds huh) {
			cout << huh.what() << endl;
		}

		convert();
	}

	void convert()
	{
		double temp;

		if (milHours > 1200)
			hour = milHours - 1200;
		else
			hour = milHours;

		hour /= 100;
		temp = (milHours - 1200) / 100.0;
		min = static_cast<int>(((temp - static_cast<int>(temp)) * 100));
	}

	void setTime(int h, int s)
	{
		
			// Create a MilTime object.
			MilTime timeObj(hour, sec);

			// Display the hour in military and
			// standard formats.
			cout << "The hour in military format is "
				<< timeObj.getHour() << endl;
			cout << "The hour in standard format is "
				<< timeObj.getStandHr() << endl;

			// Display the minutes.
			cout << "The minutes are "
				<< timeObj.getMin() << endl;

			// Display the seconds.
			cout << "The seconds are "
				<< timeObj.getSec() << endl;
		
	}

	int getHour()
	{
		return milHours;
	}

	int getStandHr()
	{
		return hour;
	}
};

int main()
{
	// Create a MilTime object for 1445 hours, 27 seconds.
	MilTime timeObj(1445, 27);

	// Display the hours, minutes, and seconds.
	cout << "The hour in military format is "
		<< timeObj.getHour() << endl;
	cout << "The hour in standard format is "
		<< timeObj.getStandHr() << endl;
	cout << "The minutes are "
		<< timeObj.getMin() << endl;
	cout << "The seconds are "
		<< timeObj.getSec() << endl;

	MilTime hrExcept(9000, 27);

	cout << "The hour in military format is "
		<< hrExcept.getHour() << endl;
	cout << "The hour in standard format is "
		<< hrExcept.getStandHr() << endl;
	cout << "The minutes are "
		<< hrExcept.getMin() << endl;
	cout << "The seconds are "
		<< hrExcept.getSec() << endl;

	MilTime sExcept(1445, 90);

	cout << "The hour in military format is "
		<< sExcept.getHour() << endl;
	cout << "The hour in standard format is "
		<< sExcept.getStandHr() << endl;
	cout << "The minutes are "
		<< sExcept.getMin() << endl;
	cout << "The seconds are "
		<< sExcept.getSec() << endl;
	return 0;
}
