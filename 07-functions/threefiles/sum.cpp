/**
 * @file sum.cpp
 * @author Gabe de la Cruz (gvdelacruz@nic.edu)
 * @brief 
 * @version 0.1
 * @date 2021-02-27
 * 
 * 
 */
#include "sum.h"

// SECTION 5. Function definitions

/**
 * @brief  Prints to the screen the title of the program
 * 
 */
void displayTitle()
{
    cout << "Welcome to my program!!!\n";
    cout << "This function displays the title of the program!\n\n";
}

/**
 * @brief Computes the sum of num1 and num2, then displays
 *        results to the console.
 * 
 * @param num1  left operand of add 
 * @param num2  right operand of add
 */
void addThenPrintResult(int num1, int num2)
{
    int sum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << sum << '\n';
}

/**
 * @brief Returns the sum of num1 and num2
 * 
 * @param num1  left operand of add 
 * @param num2  right operand of add
 * @return int  sum of num1 and num2
 */
int addThenReturnResult(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}