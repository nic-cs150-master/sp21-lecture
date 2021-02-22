#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    // create a C++ file stream object
    ifstream inputFile;

    // open the file to read from
    inputFile.open("names.txt");

    // test if file was opened successfully
    if (!inputFile)
    {
        cout << "Error opening file\n";
        exit(1); // terminate the program
    }

    // Version 1
    // Check the next byte in the file and see if 
    // you have reached the end of the file

    while (inputFile.peek() != EOF)
    {
        string word;
        inputFile >> word;
        cout << word << '\n';
    }

    // Version 2
    // Continue reading a string from the file
    // until you are not able to read a string.

    // string word;
    // while (inputFile >> word)
    // {
    //     cout << word << '\n';
    // }

    inputFile.close();

    return 0;
}