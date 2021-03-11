#include <iostream>
using namespace std;

int main()
{
    // int x = 23;
    // int y = 12;

    // cout << "x = " << x << '\n';
    // cout << "the address of x = " << &x << '\n';

    // cout << "y = " << y << '\n';
    // cout << "the address of y = " << &y << '\n';


    int arr[4] = {1, 2, 3, 4};

    for (int i = 0; i < 4; ++i)
    {
        cout << "arr[" << i << "] = " << arr[i] << '\n';
        cout << "addres of arr[" << i << "] = " << &arr[i] << '\n';
    }

    cout << arr << '\n'; // address of the first element of the array

    return 0;
}