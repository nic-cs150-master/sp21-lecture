/**
 * @file problem4.cpp
 * @author Gabe de la Cruz (gvdelacruz@nic.edu)
 * @brief 
 * @version 0.1
 * @date 2021-01-22
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

void firstVerse();
void homies();
void semicolon();
void cpuLoves();

int main()
{
    // print the first verse
    firstVerse();
    cout << endl; // add the space between verses

    // print the second verse
    homies();
    cpuLoves();
    semicolon();
    cout << endl; // add the space between verses

    return 0;
}

void firstVerse()
{
    homies();
    semicolon();
}

void homies()
{
    cout << "Hey homies, my code is gonna rock this place\n"
         << "With a function named main and a curly brace\n";
}

void semicolon()
{
    cout << "I put a semicolon at the end of each line\n"
         << "You haters never seen code that looked so fine\n";
}

void cpuLoves()
{
    cout << "The CPU loves my code, no need to debug\n";
    cout << "I can rap in C++ until it unplug\n";
}

