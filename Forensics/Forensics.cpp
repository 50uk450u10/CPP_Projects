//Sean Zamora
//ITSE 1307
//02/28/2024
//Create a program that will allow investigators to type in their measurement findings and output answers to help in their investigation.

#include <iostream>
using namespace std;

//global variables
double medullaDiameter = 0.0;
double entireHair = 0.0;
double femurHeight = 0.0;
int gender = 0;

//used region to condense
#pragma region My functions
void setHairType();
int getHairType(double, double);
void setHeight();
double getHeight(double femurHeight, int gender);
#pragma endregion Prototype functions

int main()
{
    setHairType();//called setHairType function
    setHeight();//called setHeight function

    if (getHairType(medullaDiameter, entireHair) == 0) {//if statement calling getHairType function to check if sample is human or animal.
        cout << "The sample provided is from an animal." << endl;
    }
    else {
        cout << "The sample provided is from a Human." << endl;
    }
    cout << "The height is estimated to be: " << getHeight(femurHeight, gender) << endl;//print out estimated height
}


//Functions declared
void setHairType() {//input and output for hair type calculation
    cout << "Please enter the medulla width in mm: " << endl;
    cin >> medullaDiameter;
    cout << "Please enter the entire hair width in mm: " << endl;
    cin >> entireHair;
}

int getHairType(double medullaDiameter, double entireHair) {
    if (medullaDiameter / entireHair >= 0.5) {
        return 0;
    }
    else {
        return 1;
    }
}

void setHeight() {//input and output for height calculation
    cout << "Please enter the gender (0 for male, 1 for female): " << endl;
    cin >> gender;
    cout << "Please enter the femur length in cm: " << endl;
    cin >> femurHeight;
}

double getHeight(double femurHeight, int gender) {
    double estHeight = 0;
    if (gender == 0) {
        estHeight = 69.089 + 2.238 * femurHeight;
    }
    else if(gender == 1){
        estHeight = 61.412 + 2.317 * femurHeight;
    }
    else {
        cout << "Invalid input." << endl;
    }
    return estHeight;
}