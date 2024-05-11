/*
Sean Zamora
ITSE 1307
03/06/2024
Attempt object oriented programming by creating a class called Circle that 
*/

#include <iostream>
using namespace std;

const double pi = 3.14159265359;//constant for pi

class Circle {//class declared
    double radius;//private variable

    public:
        Circle() {//constructor

    }
        Circle(double ra) {//constructor with parameter
            radius = ra;
        }

    void setRadius(double r) {//setter for radius
        radius = r;
    }

    double getRadius() {//getter for radius
        return radius;
    }

    double getArea() {//getter for area
        double a;
        a = pi * (radius * radius);
        return a;
    }

    double getCircumference() {//getter for circumference
        double c;
        c = 2 * pi * radius;
        return c;
    }

    double getDiameter() {//getter for diameter
        double d;
        d = 2 * radius;
        return d;
    }
};

int main()//main
{
    Circle circ;//object circ created

    double rad;

    cin >> rad;

    circ.setRadius(rad);//setter call for radius
    circ.getRadius();// getter call for radius

    //output for getter logic
    cout << circ.getRadius() << endl;
    cout << circ.getArea() << endl;
    cout << circ.getCircumference() << endl;
    cout << circ.getDiameter() << endl;
}