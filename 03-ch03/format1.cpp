#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num1 = 2897, num2 = 5, num3 = 837,
        num4 = 34,   num5 = 4545, num6 = 1623; 

    cout << setw(6) << num1 << setw(6) << num2 << setw(6) << num3 << endl;
    cout << setw(6) << num4 << setw(6) << num5 << setw(6) << num6 << endl;

    return 0;
}