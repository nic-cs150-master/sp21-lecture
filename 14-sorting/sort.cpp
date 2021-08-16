#include <iostream>
#include <vector>
using namespace std;

void printArray(const int arr[], int size);
void printVector(const vector<int> &vec);
void bubbleSort(int arr[], int size);
void bubbleSort(vector<int> &vec);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);

int main()
{
    // const int ARRAY_SIZE = 10;
    // int numbers[] = {23, 5, 35, 57, 212, 43, 657, 454, 89, 3};
    // int numbers1[] = {23, 5, 35, 57, 212, 43, 657, 454, 89, 3};
    // int numbers2[] = {23, 5, 35, 57, 212, 43, 657, 454, 89, 3};

    vector<int> numVector{23, 5, 35, 57, 212, 43, 657, 454, 89, 3};

    printVector(numVector);
    bubbleSort(numVector);
    printVector(numVector);

    numVector.push_back(34);
    bubbleSort(numVector);

    // printArray(numbers, ARRAY_SIZE);


    // bubbleSort(numbers, ARRAY_SIZE);
    // printArray(numbers, ARRAY_SIZE);

    // selectionSort(numbers1, ARRAY_SIZE);
    // printArray(numbers1, ARRAY_SIZE);

    // insertionSort(numbers2, ARRAY_SIZE);
    // printArray(numbers2, ARRAY_SIZE);

    return 0;
}

void insertionSort(int arr[], int size)
{
    // For startScan = 1 to the last subscript in the array
    for (int startScan = 1; startScan < size; ++startScan)
    {
        // Set key to array[startScan]
        int key = arr[startScan];
        // Set index = startScan - 1
        int index = startScan - 1;
        // While index is greater than or equal first subscript and array[index] is greater than key
        while (index >= 0 && arr[index] > key)
        {
            // Set array[index + 1] to array[index]
            arr[index + 1] = arr[index];
            // Decrement index
            --index;
        } // End While
        // Set array[index + 1] to key
        arr[index + 1] = key;
        // Increment startScan
    } // End For
}

void selectionSort(int arr[], int size)
{
    // For startScan = 0 to the next-to-last array subscript
    for (int startScan = 0; startScan < size - 1; ++startScan)
    {
        // Set minIndex to startScan
        int minIndex = startScan;
        // Set minValue to array[startScan]
        int minValue = arr[startScan];
        // For index = (startScan + 1) to the last subscript in the array
        for (int index = startScan + 1; index < size; ++index)
        {
            // If array[index] is less than minValue
            if (arr[index] < minValue)
            {
                // Set minValue to array[index]
                minValue = arr[index];
                // Set minIndex to index
                minIndex = index;
            } // End If
            // Increment index
        } // End For

        // Set array[minIndex] to array[startScan]
        arr[minIndex] = arr[startScan];
        // Set array[startScan] to minValue
        arr[startScan] = minValue;
        // Increment startScan
    } // End For
}

void bubbleSort(int arr[], int size)
{
    // Set madeAswap to true
    bool madeAswap = true;

    // Set lastIndex to size of array - 1
    int lastIndex = size - 1;

    // While the madeAswap flag is true
    while (madeAswap)
    {
        // Set madeAswap flag to false
        madeAswap = false;
        // For count = 0 to lastIndex
        for (int count = 0; count < lastIndex; ++count)
        {
            // If array[count] is greater than array[count + 1]
            if (arr[count] > arr[count + 1])
            {
                // Swap the contents of array[count] and array[count + 1]
                int temp = arr[count];
                arr[count] = arr[count + 1];
                arr[count + 1] = temp;

                // int temp = arr[count + 1];
                // arr[count + 1] = arr[count];
                // arr[count] = temp;
                // Set madeAswap flag to true
                madeAswap = true;
            } // End If
            // Increment count
        } // End For
        // Subtract 1 from lastIndex
        --lastIndex;
    } // End While
}

void bubbleSort(vector<int> &vec)
{
    // Set madeAswap to true
    bool madeAswap = true;

    // Set lastIndex to size of array - 1
    int lastIndex = vec.size() - 1;

    // While the madeAswap flag is true
    while (madeAswap)
    {
        // Set madeAswap flag to false
        madeAswap = false;
        // For count = 0 to lastIndex
        for (int count = 0; count < lastIndex; ++count)
        {
            // If array[count] is greater than array[count + 1]
            if (vec[count] > vec[count + 1])
            {
                // Swap the contents of array[count] and array[count + 1]
                int temp = vec[count];
                vec[count] = vec[count + 1];
                vec[count + 1] = temp;

                // int temp = arr[count + 1];
                // arr[count + 1] = arr[count];
                // arr[count] = temp;
                // Set madeAswap flag to true
                madeAswap = true;
            } // End If
            // Increment count
        } // End For
        // Subtract 1 from lastIndex
        --lastIndex;
    } // End While
}

void printArray(const int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

void printVector(const vector<int> &vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << ' ';
    }
    cout << '\n';
}