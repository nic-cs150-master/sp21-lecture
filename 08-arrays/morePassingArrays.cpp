#include <iostream>
using namespace std;

void printArray(const double arr[], int arraySize);
double computeSum(const double arr[], int arraySize);
double findLargest(const double arr[], int arraySize);

int main()
{
    const int NUM_SCORES = 6;
    double scores[NUM_SCORES] = {90.0, 88.5, 91.0, 82.0, 95.5, 40.0};

    // 1. print the scores
    printArray(scores, NUM_SCORES);
    // 2. get the sum of the scores
    double sumOfArray = computeSum(scores, NUM_SCORES);
    // 3. compute the average of the scores
    double average = sumOfArray / NUM_SCORES;
    cout << "Average score: " << average << endl;
    // 4. print the highest student score
    cout << "Biggest score: " << findLargest(scores, NUM_SCORES) << endl;

    return 0;
}

double findLargest(const double arr[], int arraySize)
{
    // assume that the first element is the largest number
    double maxValue = arr[0];
    for (int i = 1; i < arraySize; ++i)
    {
        if (arr[i] > maxValue)
        {
            // found a new max value
            maxValue = arr[i];
        }
    }
    return maxValue;
}

double computeSum(const double arr[], int arraySize)
{
    double sum = 0.0; // accumulator
    for (int i = 0; i < arraySize; ++i)
    {
        // sum = sum + arr[i];
        sum += arr[i];
    }

    return sum;
}

void printArray(const double arr[], int arraySize)
{
    for (int i = 0; i < arraySize; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}