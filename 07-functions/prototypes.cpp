#include <iostream>
using namespace std;

// funciton prototypes
void function2();
void function1();


int main()
{
    function1();

    return 0;
}

// funciton definitions
void function1()
{
    cout << "Function 1 called\n";
    function2();
}

void function2()
{
    cout << "Function 2 called\n";
}

