#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    cout << sum(5, 6) << " = " << 11 << '\n';
    cout << sum(0, 5) << " = " << 5 << '\n';
    cout << sum(2, 18) << " = " << 20 << '\n';
    cout << sum(-1, 1) << " = " << 0 << '\n';

    return 0;
}