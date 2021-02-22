#include <iostream>
using namespace std;

int main()
{
    float num1 = 0;
    float num2 = 0;

    cout << "Enter numerator: ";
    cin >> num1;

    cout << "Enter denominator: ";
    cin >> num2;

    if (num2 > 0)
    {
        float result = num1 / num2;
        cout << "Result = " << result << '\n';
    }
    else
    {
        cout << "Error: division by zero!\n";
    }

    return 0;
}