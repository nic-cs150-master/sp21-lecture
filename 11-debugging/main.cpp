/**
 * @file main.cpp
 * @author Gabe de la Cruz
 * @brief Demonstrate debugging using gdb
 * @version 0.1
 * @date 2021-03-17
 * 
 */
#include <iostream>
#include "intmath.h"
using namespace std;

int main()
{
    int i = 0, j;
    cout << "Enter the first integer: ";
    cin >> i;
    cout << "Enter the second integer: ";
    cin >> j;
    cout << "Greatest common divisor: " 
         << gcd(i, j) << ".\n" ;
    cout << "Least common multiple: "
         << lcm(i, j) << ".\n" ;
    return 0;
}
