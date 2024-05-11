/*
Sean Zamora
ITSE-2331
3/23/2024
Demonstrate the class in a program that creates a Car object, then calls the accelerate function five times.
After each call to the accelerate function, get the current speed of the car and display it.
Then, call the brake function five times.
After each call to the brake function, get the current speed of the car and display it.
*/

#include <iostream>
#include <string>

using namespace std;

class Car {
    //private variables
    int speed;
    int yearModel;
    string make;

public:
    //constructor
    Car(int y, string m) {
        yearModel = y;
        make = m;
        speed = 0;
    }
    
#pragma region getters and setters
    void setYearModel(int y) {
        cin >> y;
        yearModel = y;
    }

    int getYearModel() {
        return yearModel;
    }

    void setMake (string m) {
        cin >> m;
        make = m;
    }

    string getMake() {
        return make;
    }

    void setSpeed(int s) {
        cin >> s;
        speed = s;
    }

    int getSpeed() {
        return speed;
    }
#pragma endregion

     void accelerate() {//accelerate function
        speed += 5;
    }

    void brake() {//brake function
        speed -= 5; 
    }
    //deconstructor
    ~Car() {}
};

int main()
{
    Car myCar(2010, "Honda");//instance of class with variables passed through

    for (int i = 0; i < 5; ++i) {//for loop for 5 accelerations
        myCar.accelerate();
        cout << "Increasing speed by 5." << endl;
        cout << "Your speed is: " << myCar.getSpeed() << endl;
    }
    for (int i = 0; i < 5; ++i) {//for loop for 5 decelerations
        myCar.brake();
        cout << "Braking..." << endl;
        cout << "Your speed is now: " << myCar.getSpeed() << endl;
    }
}