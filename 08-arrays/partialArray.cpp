#include <iostream>
using namespace std;

int main()
{
    const int SENTINEL = -1;
    const int MAX_SIZE = 100;
    int numArray[MAX_SIZE];
    int numIterations = 0;

    while (numIterations < MAX_SIZE)
    {
        int number = 0;
        cout << "Enter a number [" << SENTINEL << " to quit]: ";
        cin >> number;

        if (number == SENTINEL)
        {
            break;
        }

        numArray[numIterations] = number;
        ++numIterations;
    }

    for (int i = 0; i < numIterations; ++i)
    {

    }

    return 0;
}