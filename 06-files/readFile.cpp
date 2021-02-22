#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // create a C++ file stream object
    ifstream inputFile;

    // open the file to read from
    inputFile.open("names.txt");

    for (int i = 1; i <= 4; ++i)
    {
        string word;
        inputFile >> word;
        cout << word << '\n';
    }

    inputFile.close();

    return 0;
}