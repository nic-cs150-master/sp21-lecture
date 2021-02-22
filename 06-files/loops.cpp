#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;

    string filename;
    cout << "Enter a filename to open: ";
    cin >> filename;

    out.open(filename);

    int numFriends = 0;
    cout << "How many friends do you have? ";
    cin >> numFriends;
    cin.ignore();

    string name;
    for (int i = 0; i < numFriends; ++i)
    {
        cout << "Enter a friend name: ";
        getline(cin, name);
        // how to write name to the file
        out << name << '\n';
    }

    out.close();

    return 0;
}