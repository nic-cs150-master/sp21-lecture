#include "dice.h"

void Dice::print()
{
    cout << "Length = " << mLength << '\n';
    cout << "Value = " << mValue << '\n';
    cout << "Color = " << mColor << '\n';
}

int Dice::getLength()
{
    return mLength;
}

int Dice::getValue()
{
    return mValue;
}

string Dice::getColor()
{
    return mColor;
}

void Dice::setLength(int length)
{
    if (length <= 0)
    {
        length = 1;
    }
    else
    {
        mLength = length;
    }
}

void Dice::setValue(int value)
{
    if (value < 1 || value > 6)
    {
        cout << "You gave an invalid value. Dice is assigned with 1\n";
        mValue = 1; // default value for error values 1
    }
    else
    {
        mValue = value;
    }
}

void Dice::setColor(string color)
{
    mColor = color;
}void Dice::print()
{
    cout << "Length = " << mLength << '\n';
    cout << "Value = " << mValue << '\n';
    cout << "Color = " << mColor << '\n';
}

int Dice::getLength()
{
    return mLength;
}

int Dice::getValue()
{
    return mValue;
}

string Dice::getColor()
{
    return mColor;
}

void Dice::setLength(int length)
{
    if (length <= 0)
    {
        length = 1;
    }
    else
    {
        mLength = length;
    }
}

void Dice::setValue(int value)
{
    if (value < 1 || value > 6)
    {
        cout << "You gave an invalid value. Dice is assigned with 1\n";
        mValue = 1; // default value for error values 1
    }
    else
    {
        mValue = value;
    }
}

void Dice::setColor(string color)
{
    mColor = color;
}