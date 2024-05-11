#include <iostream>
using namespace std;

int main()
{
	//calculate average hours spent on phone in 3 months
	/*string month1;
	string month2;
	string month3;
	double hour1;
	double hour2;
	double hour3;
	double avg;

	cout << "Enter the first month: " << endl;
	cin >> month1;
	cout << "Enter the second month: " << endl;
	cin >> month2;
	cout << "Enter the third month: " << endl;
	cin >> month3;
	cout << "Enter the number of hours spent on your mobile in " << month1 << endl;
	cin >> hour1;
	cout << "Enter the number of hours spent on your mobile in " << month2 << endl;
	cin >> hour2;
	cout << "Enter the number of hours spent on your mobile in " << month3 << endl;
	cin >> hour3;

	avg = (hour1 + hour2 + hour3) / 3;

	cout << fixed << setprecision(1);
	cout << "The average time spent on your mobile device for " << month1 << ", " << month2 << ", and " << month3 << " is " << avg << " hours." << endl;

	return 0;*/

	//Calculate dinner total with tax and tip rate
		/*double purchase;
	int tip;
	double tipRate;
	double tipAmt;
	double taxRate = .0825;
	double taxAmt;
	double total;

	cout << "Enter the meal purchase price: " << endl;
	cin >> purchase;
	cout << "What percent would you like to tip: 10 for 10%: ";
	cin >> tip;

	tipRate = tip;
	tipRate /= 100;
	taxAmt = purchase * taxRate;
	total = purchase + taxAmt;
	tipAmt = total * tipRate;
	total += tipAmt;

	cout << fixed << setprecision(2);
	cout << "Meal purchase: $" << purchase << endl;
	cout << "Tax rate: " << taxRate * 100 << "%" << endl;
	cout << "Tax amount: $" << taxAmt << endl;
	cout << "Tip rate: " << tip << "%" << endl;
	cout << "Tip amount: $" << tipAmt << endl;
	cout << "Total: $" << total << endl;

	return 0;*/

	//find out the larger of two numbers
	int one;
	int two;

	cout << "Please enter the first number: " << endl;
	cin >> one;
	cout << "Please enter the second number: " << endl;
	cin >> two;

	if (one > two) {
		cout << "The first number " << one << " is the larger number and number " << two << " is the smaller." << endl;
	}
	else if (two > one) {
		cout << "The second number " << two << " is the larger number and number " << one << " is the smaller." << endl;
	}
	else {
		cout << "The first and second numbers are the same." << endl;
	}

	return 0;
}