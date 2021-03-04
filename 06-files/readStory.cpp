#include <iostream>
#include <fstream>
#include <cstdlib> // exit()
using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("story.txt");

    // validate if file is opened successfully
    if (!inputFile)
    {
        cout << "Error opening file\n";
        exit(1); // program terminates
    } 

    while (inputFile.peek() != EOF)
    {
        string line = "";
        // inputFile >> line; // >> extraction reads until a whitespace
        getline(inputFile, line); // also reads the enter or newline character
        cout << line << '\n';
    }

    return 0;
}