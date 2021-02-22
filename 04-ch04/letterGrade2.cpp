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

// Global constant variables
const float MIN_A_SCORE = 90.0,
            MIN_B_SCORE = 80.0,
            MIN_C_SCORE = 70.0,
            MIN_D_SCORE = 60.0; // Below 60 is F

char getLetterGrade(char score);

int main()
{
    // Get this student's numeric score
    int testScore = 0;   // Current student's numeric test score
    cout << "\nEnter the numeric test score: ";
    cin >> testScore;

    // Determine the letter grade
    char grade = '\0';   // Current student's letter grade
    bool goodScore = true;

    if (grade >= 0) // TODO: Check score is valid
    {
        grade = getLetterGrade(testScore);
    }
    else
    {
        goodScore = false;   // The score was below 0
    }

    // Display the letter grade
    if (goodScore)
    {
        cout << "The letter grade is " << grade << ".\n";
    }
    else
    {
        cout << "The score cannot be below zero.\n";
    }

    return 0;
}

char getLetterGrade(char score)
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

