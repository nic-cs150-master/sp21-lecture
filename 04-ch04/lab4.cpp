/**
 * @file   main.cpp
 * @brief  Program will calculate area of different shapes.
 * @author Team 4
 * @date   2/9/2021
 *
 */
#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

const double PI = 3.14159;

void square();
void circle();
void rightTriangle();

double getAreaOfSquare(double length);
double getAreaOfCircle(double radius);
double getAreaOfRightTriangle(double base, double height);
double getVolumeOfCylinder(double radius, double height);

int main()
{  
    cout << "1 -- square\n"
         << "2 -- circle\n"
         << "3 -- right triangle\n"
         << "4 -- quit\n";

    int userChoice;
    cin >> userChoice;

    switch(userChoice)
    {
        case 1:
            square();
            break;

        case 2:
            circle();
            break;

        case 3:
            rightTriangle();
            break;

        case 4:
            return 0;
        
        default:
            cout << "Error: Invallid input\n";
    }

    return 0;
}

void square()
{
    double length = 0.0;
    cout << "Enter length:";
    cin >> length;

    double area = getAreaOfSquare(length);
    cout << "Area is " << area << endl;
}

void circle()
{
    double radius = 0.0;
    cout << "Enter radius:";
    cin >> radius;

    // double area = getAreaOfCircle(radius);
    cout << "The area is " << getAreaOfCircle(radius) << endl; 
}

void rightTriangle()
{
    double length = 0.0;
    double height = 0.0;
    cout << "Enter length:";
    cin >> length;
    cout << "Enter height:";
    cin >> height;

    cout << "The area is " << getAreaOfRightTriangle(length, height) << endl;
}

double getAreaOfSquare(double length)
{
    double result = length * length;
    return result;
}

double getAreaOfCircle(double radius)
{
    return PI * radius * radius;
}

double getAreaOfRightTriangle(double base, double height)
{
    return (base * height) / 2.0;
}

double getVolumeOfCylinder(double radius, double height)
{
    // volume = PI * r^2 * h

}