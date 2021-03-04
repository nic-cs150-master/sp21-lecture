#include <iostream>
#include <fstream>
#include <cstdlib> // exit()
#include <string>
using namespace std;

int main()
{
    // create a file stream object
    ifstream inFile;
    inFile.open("data/students.csv");

    // check if file opened successfully
    if (!inFile)
    {
        cout << "Error opening file\n";
        exit(-1);
    }

    // read column headers (first line)
    string headers;
    getline(inFile, headers);

    // accumulators
    double sumTest1 = 0.0;
    double sumTest2 = 0.0;
    double sumTest3 = 0.0;
    // counter variable
    int numStudents = 0;

    while (inFile.peek() != EOF)
    {
        char delim;

        // read all the data in one row
        int id = 0;
        inFile >> id;
        inFile >> delim; // comma

        string studentName = "";
        getline(inFile, studentName, ','); // read a string until a comma, its read the comma

        int age = 0;
        inFile >> age;
        inFile >> delim;

        char gender;
        inFile >> gender >> delim;

        int score1 = 0, score2 = 0, score3 = 0;
        inFile >> score1 >> delim
               >> score2 >> delim
               >> score3;
        inFile.get(); // read the enter/newline
 
        // sumTest1 = sumTest1 + score1;
        sumTest1 += score1;
        sumTest2 += score2;
        sumTest3 += score3;

        numStudents++;

        double averageScore = (score1 + score2 + score3) / 3.0;

        cout << "ID #" << id << '\n';
        cout << studentName << '\n';
        cout << "Average Test Score: " << averageScore << "\n\n";
    }

    cout << "Class Statistics:\n";
    cout << "=================\n";
    cout << "Average Test 1: " << sumTest1 / numStudents << '\n';
    cout << "Average Test 2: " << sumTest2 / numStudents << '\n';
    cout << "Average Test 2: " << sumTest3 / numStudents << '\n';

    return 0;
}