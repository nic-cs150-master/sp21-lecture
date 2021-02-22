#include <iostream>
using namespace std;

const float PI = 3.1415; // Global variables

int main()
{
    int x = 30;

    if (true)
    {
        int x = 20;
        cout << "x = " << x << '\n';
    }

    cout << "x = " << x << '\n';
    
    int y = 30;
    cout << "y = " << y << '\n';

    return 0;
}