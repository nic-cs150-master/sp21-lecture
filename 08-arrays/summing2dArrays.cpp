#include <iostream>
using namespace std;

const int NUM_STUDENTS = 3; // # of rows
const int NUM_QUIZZES = 2;  // # of columns

void computeStudentAverage(const double arr[][NUM_QUIZZES]);
void computeQuizAverage(const double arr[][NUM_QUIZZES]);

int main()
{
    double nums[NUM_STUDENTS][NUM_QUIZZES] = {{87.2, 55.3}, {99.0, 100.0}, {78.6, 65.5}};

    // USE FUNCTIONS:
    // get average of rows (average score for each student)
    computeStudentAverage(nums);
    // get average of columns (average score for each quiz)
    computeQuizAverage(nums);

    return 0;
}

void computeStudentAverage(const double arr[][NUM_QUIZZES])
{
    for (int rowIndex = 0; rowIndex < NUM_STUDENTS; ++rowIndex) // row indices
    {
        double sum = 0.0; // accumulator
        for (int colIndex = 0; colIndex < NUM_QUIZZES; ++colIndex) // column indices
        {
            sum += arr[rowIndex][colIndex];
        }
        double average = sum / NUM_QUIZZES;
        cout << "Student #" << rowIndex + 1 << " has an average score of " << average << '\n';
    }
}

void computeQuizAverage(const double arr[][NUM_QUIZZES])
{
    for (int colIndex = 0; colIndex < NUM_QUIZZES; ++colIndex) // column indices
    {
        double sum = 0.0; // accumulator
        for (int rowIndex = 0; rowIndex < NUM_STUDENTS; ++rowIndex) // row indices
        {
            sum += arr[rowIndex][colIndex];
        }
        double average = sum / NUM_STUDENTS;
        cout << "Quiz #" << colIndex + 1 << " has an average score of " << average << '\n';
    }
}