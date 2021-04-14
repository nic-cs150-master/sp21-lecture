#include "car.h"

// return_type name_of_class::name_function()
// Car::Car()
// {
//     // best used for setting up or initialization
    
//     // default values
//     mYear = 2021;
//     mMake = ""; // empty string
//     mSpeed = 0;
//     cout << "Car constructor called\n";
// }

Car::Car(int year, string make, int speed)
{
    // mYear = year;
    // mMake = make;
    // mSpeed = speed;
    setValue(year, make, speed);
    cout << "Car constructor with 3 params\n";
}

Car::~Car()
{
    cout << "Destructor triggered\n";
}

// Car::Car(int year)
// {
//     setYear(year);
//     mMake = ""; // empty string
//     mSpeed = 0;
//     cout << "Car constructor with 1 param\n";
// }

// Car::Car(int year, string make)
// {
//     setValue(year, make, 0);
//     cout << "Car constructor with 2 params\n";
// }

void Car::someFunction()
{
    cout << "someFunction called\n";
}

int Car::getYear()
{
    // someFunction();
    return mYear;
}

string Car::getMake()
{
    return mMake;
}

int Car::getSpeed()
{
    return mSpeed;
}

void Car::setYear(int year)
{
    // 1980 to 2022
    if (year < 1980 || year > 2022)
    {
        mYear = 2022;
        cout << "Year " << year << " is invalid!\n";
    }
    else
    {
        mYear = year;
    }
}

void Car::setMake(string make)
{
    mMake = make;
}

void Car::setSpeed(int speed)
{
    if (speed < 0)
    {
        mSpeed = 0;
        cout << "Invalid speed!\n";
    }
    else
    {
        mSpeed = speed;
    }
}

void Car::setValue(int year, string make, int speed)
{
    // mYear = year;
    // mMake = make;
    // mSpeed = speed;
    setYear(year);
    setMake(make);
    setSpeed(speed);
}

void Car::accelerate()
{
    if (mSpeed + 5 > 150)
    {
        mSpeed = 150;
        cout << "Car has reached maximum speed\n";
    }
    else
    {
        mSpeed += 5; // mSpeed = mSpeed + 5;
    }
}

void Car::brake()
{
    if (mSpeed - 5 < 0)
    {
        mSpeed = 0;
        cout << "Car is no longer moving\n";
    }
    else
    {
        mSpeed -= 5;
    }
}


