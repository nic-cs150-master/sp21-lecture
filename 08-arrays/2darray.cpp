#include <iostream>
using namespace std;

int main()
{
    const int NUM_STUDENTS = 3;
    const int NUM_TESTS = 4;
    double studentScores[NUM_STUDENTS][NUM_TESTS];

    // // 1st student
    // studentScores[0][0] = 45.45;
    // studentScores[0][1] = 54.45;
    // studentScores[0][2] = 90.45;
    // studentScores[0][3] = 67.45;

    // // 2nd student
    // studentScores[1][0] = 45.45;
    // studentScores[1][1] = 54.45;
    // studentScores[1][2] = 90.45;
    // studentScores[1][3] = 67.45;

    for (int rowIndex = 0; rowIndex < NUM_STUDENTS; ++rowIndex) // outer loop (rows)
    {
        cout << "STUDENT #" << rowIndex + 1 << '\n';
        for (int colIndex = 0; colIndex < NUM_TESTS; ++colIndex) // inner loop (cols)
        {
            cout << "Enter quiz # " << colIndex + 1 << ": ";
            cin >> studentScores[rowIndex][colIndex];
        }
    }

    return 0;
}