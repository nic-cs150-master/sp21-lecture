#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double salesDay1 = 0.0;
    cout << "Enter the sales for day 1: ";
    cin >> salesDay1;

    double salesDay2 = 0.0;
    cout << "Enter the sales for day 2: ";
    cin >> salesDay2;

    double salesDay3 = 0.0;
    cout << "Enter the sales for day 3: ";
    cin >> salesDay3;

    double total = salesDay1 + salesDay2 + salesDay3;

    cout << "Sales Figures\n"
         << "----------------\n";

    cout << fixed << setprecision(2); // fixed / setprecision combo
    cout << "Day 1:" << setw(9) << salesDay1 << '\n';
    cout << "Day 2:" << setw(9) << salesDay2 << '\n';
    cout << "Day 3:" << setw(9) << salesDay3 << '\n';
    cout << "Total:" << setw(9) << total << '\n';

    return 0;
}