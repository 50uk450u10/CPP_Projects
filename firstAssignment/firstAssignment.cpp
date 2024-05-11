#include <iostream>
using namespace std;

int main()
{
    //Variables declared
    float item1 = 15.95;
    float item2 = 24.95;
    float item3 = 6.95;
    float item4 = 12.95;
    float item5 = 3.95;
    float tax = 0.07;
    float subtotal = item1 + item2 + item3 + item4 + item5; //Easy calculation for simpler code
    float salesTax = subtotal * tax; //Tax to be added to final amount
    float total = subtotal + salesTax; //Final amount

    //Display of itemized list, subtotal, tax, & total
    cout << "Price of item 1 = $" << item1 << endl;
    cout << "Price of item 2 = $" << item2 << endl;
    cout << "Price of item 3 = $" << item3 << endl;
    cout << "Price of item 4 = $" << item4 << endl;
    cout << "Price of item 5 = $" << item5 << endl;
    cout << endl;
    cout << "Subtotal = $" << subtotal << endl;
    cout << endl;
    cout << "Tax = $" << salesTax << endl;
    cout << endl;
    cout << "Total = $" << total << endl;

    return 0;
}