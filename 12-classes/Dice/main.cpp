#include <iostream>
#include <string>
#include "dice.h"
using namespace std;


int main()
{
    Dice d1, d2, d3; // created three instances/objects of type Dice

    cout << "Enter values for dice 1: \n";
    string color;
    cout << "Enter color: ";
    cin >> color;

    // change the member values inside each instance
    // dot operator to call the member functions
    d1.setColor(color);
    d1.setLength(3);
    d1.setValue(1);
    cout << d1.getColor() << ' ' << d1.getLength() << ' ' << d1.getValue() << '\n';

    d2.setColor("green");
    d2.setLength(5);
    d2.setValue(5);
    d2.print();
    cout << '\n';

    d3.setColor("blue");
    d3.setLength(2);
    d3.setValue(7);
    d3.print();


    return 0;
}