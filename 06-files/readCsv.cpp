#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib> // exit()
#include <iomanip>
using namespace std;

int main()
{
    // create a c++ file stream object
    ifstream inputFile;

    // open the file to read data from
    inputFile.open("data/students.csv");

    // test if file opened successfully
    if (!inputFile)
    {
        cout << "Error opening file!\n";
        exit(1); // program terminates
    }

    // read headers and disregard
    string headers;
    getline(inputFile, headers);

    cout << fixed << setprecision(2);

    // count number of students in the file
    int numStudents = 0; // counter variable

    // get the sum for each test for all students
    int test1Sum = 0.0; // accumulator
    int test2Sum = 0.0; // accumulator
    int test3Sum = 0.0; // accumulator

    // go through each student in the file
    while (inputFile.peek() != EOF)
    {
        char delim;

        // read student id and comma
        int studentId;
        inputFile >> studentId >> delim;

        // read student name and comma
        string name;
        getline(inputFile, name, ',');

        // read student age and comma
        int age;
        inputFile >> age >> delim;

        // read student gender and comma
        char gender;
        inputFile >> gender >> delim;

        // read student test scores
        int score1, score2, score3;

        // read test score 1 and comma
        inputFile >> score1 >> delim;
        // read test score 1 and comma
        inputFile >> score2 >> delim;
        // read test score 1 
        inputFile >> score3;

        // read the newline hidden character
        char newline = inputFile.get();

        // Add student scores to accumulator
        test1Sum += score1;
        test2Sum += score2;
        test3Sum += score3;

        // compute student's average grade
        double average = (score1 + score2 + score3) / 3.0;

        // count student
        ++numStudents;

        // Display student information and average test score
        cout << "ID #" << studentId << '\n';
        cout << name << '\n';
        cout << "Average Test Score: " << average << "\n\n";
    }

    // compute average of each test
    double test1Average = static_cast<double>(test1Sum) / numStudents;
    double test2Average = static_cast<double>(test2Sum) / numStudents;
    double test3Average = static_cast<double>(test3Sum) / numStudents;

    // display class statistics
    cout << "Class Statistics:\n";
    cout << "=================\n";
    cout << "Test 1 Average: " << test1Average << '\n';
    cout << "Test 2 Average: " << test2Average << '\n';
    cout << "Test 3 Average: " << test3Average << '\n';

    return 0;
}