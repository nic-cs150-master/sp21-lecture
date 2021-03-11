#include <iostream>
using namespace std;

int main()
{
    // int hours1 = 0, hours2 = 0, 
    //     hours3 = 0, hours4 = 0, 
    //     hours5 = 0, hours6 = 0;

    const int NUM_HOURS = 6;
    int hours[NUM_HOURS];

    // Input hours worked
    cout << "Enter the hours worked by "
         << "6 employees: ";
    // cin >> hours[0];
    // cin >> hours[1];
    // cin >> hours[2];
    // cin >> hours[3];
    // cin >> hours[4];
    // cin >> hours[5];

    for (int index = 0; index < NUM_HOURS; ++index)
    {
        cin >> hours[index];
    }

    // Display hours worked
    cout << "The hours are: ";
    // cout << " " << hours[0];
    // cout << " " << hours[1];
    // cout << " " << hours[2];
    // cout << " " << hours[3];
    // cout << " " << hours[4];
    // cout << " " << hours[5] << '\n';

    for (int index = 0; index < NUM_HOURS; ++index)
    {
        cout << " " << hours[index];
    }
    cout << '\n';

    return 0;
}

