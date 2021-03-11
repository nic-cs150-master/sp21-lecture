#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    fstream inFile;
    inFile.open("work.txt");

    if (!inFile)
    {
        cout << "Error opening file\n";
        exit(1);
    }

    const int NUM_HOURS = 7;
    int hours[NUM_HOURS];
    int index = 0;
    while (index < NUM_HOURS && inFile.peek() != EOF)
    {
        // int num;
        // inFile >> num;
        // hours[index] = num;

        inFile >> hours[index];
        ++index;
    }

    for (int i = 0; i < NUM_HOURS; ++i)
    {
        cout << hours[i] << ' ';
    }
    cout << '\n';

    return 0;
}