#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    Person();
    ~Person();

    void setPerson(string name, int id, int age);
    string getName() const;
    int getId() const;
    int getAge() const;

private:
    string mName;
    int mId;
    int mAge;
};

Person::Person()
{
    mName = "";
    mId = 0;
    mAge = 0;
}

Person::~Person()
{}

void Person::setPerson(string name, int id, int age)
{
    mName = name;
    mId = id;
    mAge = age;
}

string Person::getName() const
{
    return mName;
}

int Person::getId() const
{
    return mId;
}

int Person::getAge() const
{
    return mAge;
}


// return position of where item is found
int linearSearch(const int list[], int size, int value);
int binarySearch(const int list[], int size, int value);

// searching by what key field
int linearSearchByName(const Person list[], int size, string value);
int binarySearchById(const Person list[], int size, int value);

int main()
{
    Person persons[5];
    persons[0].setPerson("John",   324342, 24);
    persons[1].setPerson("Angela", 343413, 26);
    persons[2].setPerson("Barry",  534544, 45);
    persons[3].setPerson("David",  645345, 65);
    persons[4].setPerson("Michael", 734343, 87);


    string name = "Michael";
    int id = 324342;

    int foundAtIndex = linearSearchByName(persons, 5, name);
    int foundAtIndex2 = binarySearchById(persons, 5, id);

    cout << name << " found at index " << foundAtIndex << '\n';
    cout << id << " found at index " << foundAtIndex2 << '\n';

    // const int NUM_ELEMS = 9;
    // int numbers[] = {10, 100, 19, 72, 8, 40, 2, 65, 23};
    // int numbers2[] = {2, 8, 10, 19, 23, 40, 65, 72, 100};

    // int searchValue = 2343;

    // int foundAtIndex = linearSearch(numbers, NUM_ELEMS, searchValue);
    // int foundAtIndex2 = binarySearch(numbers2, NUM_ELEMS, searchValue);

    // if (foundAtIndex == -1)
    // {
    //     cout << "Item not found in the list\n";
    // }
    // else
    // {
    //     cout << searchValue << " found at index " << foundAtIndex << '\n';
    //     cout << searchValue << " found at index " << foundAtIndex2 << '\n';
    // }

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

int linearSearchByName(const Person list[], int size, string value)
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
        if (list[index].getName() == value)
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

int binarySearchById(const Person list[], int size, int value)
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
        if (list[middle].getId() == value)
        {
            // Set found to true
            found = true;
            // Set position to middle
            position = middle;
        }
        // Else If array[middle] is greater than the desired value
        else if (list[middle].getId() > value)
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