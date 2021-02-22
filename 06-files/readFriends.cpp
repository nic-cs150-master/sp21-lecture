#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    // create a C++ file stream object
    ifstream inputFile;

    // open the file to read from
    inputFile.open("friends.txt");

    // test if file was opened successfully
    if (!inputFile)
    {
        cout << "Error opening file\n";
        exit(1); // terminate the program
    }

    while (inputFile.peek() != EOF)
    {
        string word;
        // inputFile >> word;     // Read a string until a whitespace
        getline(inputFile, word); // Read a string until a newline character
        cout << word << '\n';
    }

    inputFile.close();

    return 0;
}