/*
Sean Zamora
ITSE-1307
01/29/2024
Calculator that asks the user for mass, velocity, and height to calculate kinetic and potential energy.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double m, v, h, KE, PE;
	const double g = 9.8; //generic acceleration of gravity

	cout << "Please enter mass in kilograms, followed by velocity in meters per second, then height in meters: " << endl;
	cin >> m >> v >> h;
	
	KE = 0.5 * m * pow(v, 2);
	PE = m * g * h;

	//cout << m << " " << v << " " << h << " " << g << endl; //Input value test
	cout << endl;
	cout << "Kinectic energy is: \n" << KE << endl;
	cout << "Potential energy is: \n" << PE << endl;

	return 0;
	
}