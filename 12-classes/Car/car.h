#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>
using namespace std;

class Car
{
public:
    Car(int year=2021, string make="", int speed=0);
    ~Car(); // single and one destructor

    // Car(); // default constructor
    // Car(int year, string make, int speed);
    // Car(int year);
    // Car(int year, string make);

    // accessor functions / getter function
    int getYear();
    string getMake();
    int getSpeed();

    // mutator functions / setter functions
    void setYear(int year);
    void setMake(string make);
    void setSpeed(int speed);
    void setValue(int year, string make, int speed);

    void accelerate();
    void brake();

private:
    int mYear;
    string mMake;
    int mSpeed;

    void someFunction();
};

#endif