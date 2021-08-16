#include <iostream>
using namespace std;

// return position of where item is found
int linearSearch(const int list[], int size, int value);
int binarySearch(const int list[], int size, int value);

int main()
{
    const int NUM_ELEMS = 9;
    int numbers[] = {10, 100, 19, 72, 8, 40, 2, 65, 23};
    int numbers2[] = {2, 8, 10, 19, 23, 40, 65, 72, 100};

    int searchValue = 2343;

    int foundAtIndex = linearSearch(numbers, NUM_ELEMS, searchValue);
    int foundAtIndex2 = binarySearch(numbers2, NUM_ELEMS, searchValue);

    if (foundAtIndex == -1)
    {
        cout << "Item not found in the list\n";
    }
    else
    {
        cout << searchValue << " found at index " << foundAtIndex << '\n';
        cout << searchValue << " found at index " << foundAtIndex2 << '\n';
    }

    return 0;
}

int binarySearch(const int list[], int size, int value)
{
    // Set first to 0
    int first = 0;
    // Set last to the last subscript in the array
    int last = size - 1;
    // Set found to false
    bool found = false;
    // Set position to -1
    int position = -1;
    // While found is not true and first is less than or equal to last
    while (!found && first <= last)
    {
        // Set middle to the subscript halfway between first and last
        int middle = (last + first) / 2;
        // If array[middle] equals the desired value
        if (list[middle] == value)
        {
            // Set found to true
            found = true;
            // Set position to middle
            position = middle;
        }
        // Else If array[middle] is greater than the desired value
        else if (list[middle] > value)
        {
            // Set last to middle - 1
            last = middle - 1;
        }
        // Else
        else
        {
            // Set first to middle + 1
            first = middle + 1;
        }
        // End If
    } // End While
    // Return position
    return position;
}

int linearSearch(const int list[], int size, int value)
{
    // Set found to false
    bool found = false;
    // Set position to -1
    int position = -1;
    // Set index to 0
    int index = 0;
    // While index < number of elements and found is false
    while (index < size && !found)
    {
        // If list[index] is equal to search value
        if (list[index] == value)
        {
            // found = true
            found = true; 
            // position = index
            position = index;
        } // End If
        // Add 1 to index
        ++index;
    } // End While
    // Return position
    return position;
}