#include <iostream>
using namespace std;

void doubleArray(int nums[], int size);
void printArray(int nums[], int size);

int main()
{
    const int ARRAY_SIZE = 3;
    int arrayInt[ARRAY_SIZE] = {1, 2, 3};

    // Display original values
    cout << "The arrays values are: \n";
    printArray(arrayInt, ARRAY_SIZE);

    // Double the arrays in the array
    doubleArray(arrayInt, ARRAY_SIZE);

    // Display the new values
    cout << "\nAfter calling doubleArray, the values are:\n";
    printArray(arrayInt, ARRAY_SIZE);
    cout << '\n';
    return 0;
}

void doubleArray(int nums[], int size)
{
    for (int index = 0; index < size; ++index)
    {
        nums[index] *= 2;
    }
}

void printArray(int nums[], int size)
{
    for (int index = 0; index < size; ++index)
    {
        cout << nums[index] << " ";
    }
    cout << '\n';
}