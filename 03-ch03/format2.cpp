#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num = 244.23456;
    cout << num << '\n';
    cout << setprecision(5) << num << '\n';
    cout << setprecision(4) << num << '\n';
    cout << setprecision(3) << num << '\n';
    cout << setprecision(2) << num << '\n';

    return 0;
}