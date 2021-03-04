#include <iostream>
using namespace std;

void showArea(double length = 20.0, double width = 10.0);

int main()
{
    showArea();
    showArea(12.0);
    showArea(12.0, 5.5);
    // showArea(, 6.0);  // Illegal function call!
}

void showArea(double length, double width)
{
    double area = length * width;
    cout << "The area is " << area << '\n';
}