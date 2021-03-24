#include <iostream>
using namespace std;

enum MenuChoice
{
    LOAD = 1,
    STORE,
    PLAY,
    EXIT
};

int main()
{
    int menuChoice;
    cout << "Menu Items: \n";
    cout << "1. Load Music\n";
    cout << "2. Store Music\n";
    cout << "3. Play Music\n";
    cout << "4. Exit\n";
    cin >> menuChoice;


    switch(menuChoice)
    {
        case LOAD:
            cout << "Loading music\n";
            break;
        
        case STORE:
            cout << "Storing music\n";
            break;

        case PLAY:
            cout << "Playing music\n";
            break;

        case EXIT:
            cout << "Exiting Program\n";
            break;
    }

    return 0;
}