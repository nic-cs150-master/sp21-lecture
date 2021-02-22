#include <iostream>
using namespace std;

double computeAreaOfRectangle(double length, double width);

int main()
{
    // ask user to input for length and width
    double length = 0;
    double width = 0;

    cout << "Enter length as double: ";
    cin >> length;

    cout << "Enter width as double: ";
    cin >> width;

    // double area = 2 * 3.13 * pow(4, 2);
    double area = computeAreaOfRectangle(length, width);

    cout << "Area of the rectange is " << area << '\n';

    // cout << "Area is " << computeAreaOfRectangle(length, width) << '\n';

    return 0;
}

// Write a function called computeAreaOfRectangle that 
// accepts the length and width of a rectangle as double numbers. 
// The function will return the computed area.
double computeAreaOfRectangle(double length, double width)
{
    return length * width;
}