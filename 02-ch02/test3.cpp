/*
Write a program that stores the integers 50 and 100 
in variables and stores the sum of these two in a 
variable named total. Display the total on the screen.
*/

#include <iostream> // cout, cin
using namespace std;

int main()
{
    // stores integers 50 and 100 in variables (num1, num2)
    int num1 = 50, num2 = 100;
    // int num1 = 50;
    // int num2 = 100;

    // store sum of two integers in variable total
    // int total;
    // total = num1 + num2;

    int total = num1 + num2;

    // display the total on the screen
    // cout << "Total is " << total << endl;
    cout << "The sum of " << num1 
         << " and " << num2 
         << " is " << total << endl;

    return 0;
}