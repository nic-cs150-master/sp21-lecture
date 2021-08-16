#include <iostream>
using namespace std;

int main()
{
    // pointer variable are variables that store/contain/ hold
    // address of another variable (should be of the same type as the pointer
    // variable)
    // int *ptr = nullptr;
    // int x = 20;

    // ptr = &x;
    // *ptr = 40; // dereferencing

    // cout << ptr << ' ' << *ptr << &ptr << '\n';

    int x = 20; // stack memory
    int y = 30; // stack memory
    int *ptr = nullptr; // stack memory


    // dynamic memory uses the heap memory

    // request for dynamic memory
    ptr = new int;
    *ptr = 25;
    
    // operator free up dynamic memory
    delete ptr;
    ptr = nullptr;

    // request for a dynamic array
    ptr = new int[5];

    ptr[0] = 23;

    delete [] ptr;
    ptr = nullptr;

    return 0;
}