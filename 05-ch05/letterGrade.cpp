/**
 * @file letterGrade.cpp
 * @author Gabe de la Cruz (gvdelacruz@nic.edu)
 * @brief  Get the letter grade of student
 * @version 0.1
 * @date 2021-02-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
using namespace std;

const float MIN_A_SCORE = 90.0,
            MIN_B_SCORE = 80.0,
            MIN_C_SCORE = 70.0,
            MIN_D_SCORE = 60.0; // Below 60 is F

char getLetterGrade(float score);
void getNumericScore();


int main()
{
    // get how many students
    int numStudents = 0;
    cout << "Enter number of students: ";
    cin >> numStudents;

    int count = 1;
    while (count <= numStudents)
    {
        getNumericScore();
        count = count + 1;
    }

    return 0;
}

void getNumericScore()
{
    // Get this student's numeric score
    float testScore = 0.0;   
    cout << "\nEnter the numeric test score: ";
    cin >> testScore;


    char grade = '\0';   // Current student's letter grade
    bool isScoreValid = true;  // Is the score valid

    if (testScore >= 0) // TODO: Check score is valid
    {
        grade = getLetterGrade(testScore);
    }
    else
    {
        isScoreValid = false;   // The score was below 0
    }

    // Display the letter grade
    if (isScoreValid)
    {
        cout << "The letter grade is " << grade << ".\n";
    }
    else
    {
        cout << "The score cannot be below zero.\n";
    }
}

char getLetterGrade(float score)
{
    char letterGrade = 'F';

    if (score >= MIN_A_SCORE)
    {
        letterGrade = 'A';
    }
    else if (score >= MIN_B_SCORE)
    {
        letterGrade = 'B';
    }
    else if (score >= MIN_C_SCORE)
    {
        letterGrade = 'C';
    }
    else if (score >= MIN_D_SCORE)
    {
        letterGrade = 'D';
    }

    return letterGrade;
}

