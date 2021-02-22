#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // create c++ file stream object
    ofstream outFile;

    outFile.open("names.txt");

    outFile << "Bach\n";         // Why add \n at the end?
    outFile << "Beethoven\n";
    outFile << "Mozart\n";
    outFile << "Schubert\n";

    outFile.close();

    return 0;
}
