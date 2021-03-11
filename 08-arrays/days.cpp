#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_MONTHS = 12;
    int day[NUM_MONTHS] = {31, 28, 31, 30, 31, 
                           30, 31, 31, 30, 31, 
                           30, 31};

    // day[0] = 31; // January
    // day[1] = 28; // February
    // day[2] = 31; // March
    // day[3] = 30; // April
    // day[4] = 31; // May
    // day[5] = 30; // June
    // day[6] = 31; // July
    // day[7] = 31; // August
    // day[8] = 30; // September
    // day[9] = 31; // October
    // day[10] = 30; // November
    // day[11] = 31; // December
    
    for (int month = 0; month < NUM_MONTHS; ++month)
    {
        cout << "Month " << setw(2) << (month+1) << " has "
             << day[month] << " days.\n";
    }
}