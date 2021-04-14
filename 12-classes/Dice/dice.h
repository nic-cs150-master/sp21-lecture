#ifndef DICE_H
#define DICE_H

#include <iostream>
#include <string>
using namespace std;

class Dice
{
public:
    // member functions (operations)

    // getter functions
    int getLength();
    int getValue();
    string getColor();

    // setter functions
    void setLength(int length);
    void setValue(int value);
    void setColor(string color);

    void print();

private:
    // member variables (attributes)
    int mLength;
    int mValue;
    string mColor;
};


#endif