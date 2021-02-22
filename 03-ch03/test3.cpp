#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = ""; // initial value is an empty string
    string lastName = "";
    cout << "Enter a first name: ";
    // cin >> name; 
    getline(cin, firstName);

    cout << "Enter last name: ";
    getline(cin , lastName);

    string fullName = firstName + " " + lastName;
    cout << fullName << endl;


    // int numCharacter = 0;
    // numCharacter = name.length();
    // cout << "String has " << numCharacter << " characters\n";

    // string lotsOfAsterisk = "";

    // lotsOfAsterisk.assign(100, '*');
    // cout << lotsOfAsterisk << endl;




    // int age = 0; 
    // cout << "Enter age: ";
    // cin >> age;
    // newline or enter will be left in the buffer
    // cin.ignore();

    


    // cout << "You entered " << name << '\n';

    return 0;
}