#include <iostream>
#include <string>
#include <vector>
#include "car.h"
using namespace std;

int main()
{
    int array[20];

    


    Car car1; // default constructor

    // int year = 0;
    // cout << "Enter year of the car: ";
    // cin >> year;
    // cin.ignore();

    // string make = "";
    // cout << "Enter make of the car: ";
    // getline(cin, make);

    // int speed = 0;
    // cout << "Enter speed of the car: ";
    // cin >> speed;

    // car1.setYear(year);
    // car1.setMake(make);
    // car1.setSpeed(speed);
    
    Car car2; // default constructor
    car2.setValue(1984, "Chevrolet Tahoe", 5);

    Car car3(2003, "Ford Ranger", 10); // constructor with 3 params
    Car car4(2001); // one param constructor
    Car car5(1999, "Subaru Forrester"); // two param constructor

    cout << "Car 1:\n";
    cout << car1.getYear() << ' '
         << car1.getMake() << '\n';

    cout << "Car 2:\n";
    cout << car2.getYear() << ' '
         << car2.getMake() << '\n';

    cout << "Car 3:\n";
    cout << car3.getYear() << ' '
         << car3.getMake() << '\n';

    cout << "Car 4:\n";
    cout << car4.getYear() << ' '
         << car4.getMake() << '\n';

    cout << "Car 5:\n";
    cout << car5.getYear() << ' '
         << car5.getMake() << '\n';

    Car favoriteCars[5];
    // 1st car
    favoriteCars[0].setValue(1971, "Gran Torino", 0);
    // 2nd car
    favoriteCars[1].setValue(2001, "Jeep Cherokee", 0);

    cout << favoriteCars[0].getMake() << '\n';
    cout << favoriteCars[1].getMake() << '\n';

    vector<Car> vFavoriteCars;
    Car fCar1(2001, "Dodge Ram", 0);
    vFavoriteCars.push_back(fCar1);


    // car5.someFunction();

    return 0;
}