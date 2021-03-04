/**
 * @file main.cpp
 * @author Gabe de la Cruz (gvdelacruz@nic.edu)
 * @brief 
 * @version 0.1
 * @date 2021-02-27
 * 
 * 
 */
#include <iostream>
#include "sum.h"
using namespace std;

// SECTION 4. The main function
int main()
{
    displayTitle();

    int value1 = 20, value2 = 12;
    addThenPrintResult(value1, value2);

    int result = addThenReturnResult(value1, value2);
    cout << value1 << " + " << value2 << " = " << result << '\n';

    return 0;
}
