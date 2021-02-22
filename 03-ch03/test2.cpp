#include <iostream>
#include <string>
using namespace std;

int main()
{
    int id;
    cout << "Enter id: ";
    cin >> id;
    cin.ignore(); // clears the keyboard buffer

    string name;
    cout << "Enter name of user: ";
    // cin >> name;
    getline(cin, name); // can only be used for strings

    string address;
    cout << "Enter address of the user: ";
    cin >> address;
    cin.ignore();

    // '\n'
    char enter;
    cout << "Press enter to continue...\n";
    // cin >> enter;
    enter = cin.get(); // reads character
    // cin.get(enter);


    cout << name << '\n' << address << '\n';

    return 0;
}