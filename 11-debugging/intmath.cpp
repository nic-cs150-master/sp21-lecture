/**
 * @file intmath.cpp
 * @author Gabe de la Cruz
 * @brief Implementation file for intmath
 * @version 0.1
 * @date 2021-03-17
 * 
 */
#include "intmath.h"

int gcd(int i, int j)
{
    int temp;
    while (j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }
    return i;
}

int lcm(int i, int j)
{
    return (i / gcd(i, j)) * j;
}
