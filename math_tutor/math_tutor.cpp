#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;

class QuizStudent {

public:

    QuizStudent() {

    };

    ~QuizStudent() {

    };
};

int main(){
    srand(time(NULL));
    double num1 = rand() % 100;
    double num2 = rand() % 100;
    double num3;
    int choice;
    double answer;

    do{
        cout << "Welcome to your math tutor!\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            //addition
            num3 = num1 + num2;
            cout << num1 << " " << "+" << " " << num2 << " =" << endl;
            cin >> answer;
            if (answer == num3) {
                cout << "That's correct!" << endl;
            }
            else {
                cout << "Sorry, that's incorrect." << endl;
            }
            break;
        case 2:
            //subtraction
            num3 = num1 - num2;
            cout << num1 << " " << "-" << " " << num2 << " =" << endl;
            cin >> answer;
            if (answer == num3) {
                cout << "That's correct!" << endl;
            }
            else {
                cout << "Sorry, that's incorrect." << endl;
            }
            break;
        case 3:
            //multiplication
            num3 = num1 * num2;
            cout << num1 << " " << "*" << " " << num2 << " =" << endl;
            cin >> answer;
            if (answer == num3) {
                cout << "That's correct!" << endl;
            }
            else {
                cout << "Sorry, that's incorrect." << endl;
            }
            break;
        case 4:
            //division
            num3 = num1 / num2;
            cout << num1 << " " << "/" << " " << num2 << " =" << endl;
            cin >> answer;
            if (answer == num3) {
                cout << "That's correct!" << endl;
            }
            else {
                cout << "Sorry, that's incorrect." << endl;
            }
            break;
        case 5:
            //quit
            cout << "Exiting." << endl;
            break;
        default:
            cout << "Invalid input." << endl;
            break;
        }
    } while (choice != 5);
}

