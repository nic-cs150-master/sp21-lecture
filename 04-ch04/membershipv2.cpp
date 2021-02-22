#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Determines whether a loan applicant qualifies for a 
    // special loan interest rate.
    const double ADULT_RATE = 120.0;
    const double CHILD_RATE = 60.0;
    const double SENIOR_RATE = 100.0;


    cout << "   Health Club Membership Menu\n\n";
    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit the Program\n\n";

    int choice = 0;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << fixed << setprecision(2);

    // int months = 0;
    // double charges = 0.0;
    if (choice == 1)
    {
        int months = 0;
        cout << "For how many months? ";
        cin >> months;
        double charges = months * ADULT_RATE;
        cout << "\nThe total charges is $" << charges << endl;
    }
    else if (choice == 2)
    {
        int months = 0;
        cout << "For how many months? ";
        cin >> months;
        double charges = months * CHILD_RATE;
        cout << "\nThe total charges are $" << charges << endl;
    }
    else if (choice == 3)
    {
        int months = 0;
        cout << "For how many months? ";
        cin >> months;
        double charges = months * SENIOR_RATE;
        cout << "\nThe total charges are $" << charges << endl;
    }
    else if (choice != 4) // Will else work here? Any alternative to choice != 4?
    {
        cout << "\nThe valid choices are 1 through 4.\n"
             << "Run the program again and select one those.\n";
    }

    return 0;
}