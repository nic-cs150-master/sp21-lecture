#include <iostream>
#include <iomanip>
using namespace std;

const double ADULT_RATE = 120.0;
const double CHILD_RATE = 60.0;
const double SENIOR_RATE = 100.0;

void displayMenu();
int getChoiceV1();
int getChoiceV2(int minValue, int maxValue);
void computeCharges(double rate);
void getCharges(int choice);

int main()
{
    // Determines whether a loan applicant qualifies for a 
    // special loan interest rate.
    
    while (1)
    {
        displayMenu();

        int choice = getChoiceV2(1, 4);

        if (choice == 4)
        {
            break;
        }

        cout << fixed << setprecision(2);

        getCharges(choice);
    }

    return 0;
}

void getCharges(int choice)
{
    if (choice == 1)
    {
        computeCharges(ADULT_RATE);
    }
    else if (choice == 2)
    {
        computeCharges(CHILD_RATE);
    }
    else if (choice == 3)
    {
        computeCharges(SENIOR_RATE);
    }
}

void computeCharges(double rate)
{
    int months = 0;
    cout << "For how many months? ";
    cin >> months;
    double charges = months * rate;
    cout << "\nThe total charges is $" << charges << endl;
}

int getChoiceV2(int minValue, int maxValue)
{
    int choice = 0;

    while (1)
    {
        cout << "Enter your choice [" << minValue << "-" << maxValue << "]: ";
        cin >> choice;
        if (choice < minValue || choice > maxValue)
        {
            cout << "Error: ";
        }
        else
        {
            break;
        }
    }

    return choice;
}

int getChoiceV1()
{
    int choice = 0;

    while (1)
    {
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice < 1 || choice > 4)
        {
            cout << "Error: ";
        }
        else
        {
            break;
        }
    }

    return choice;
}

void displayMenu()
{
    cout << "   Health Club Membership Menu\n\n";
    cout << "1. Standard Adult Membership\n";
    cout << "2. Child Membership\n";
    cout << "3. Senior Citizen Membership\n";
    cout << "4. Quit the Program\n\n";
}