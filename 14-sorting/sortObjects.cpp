#include <iostream>
#include <string>
#include <iomanip>
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

void printArray(const Person arr[], int size);
void sortByName(Person arr[], int size);
void sortById(Person arr[], int size);
void sortByAge(Person arr[], int size);

int main()
{
    const int NUM_PERSONS = 10;
    Person persons[NUM_PERSONS];
    persons[0].setPerson("John", 534544, 87);
    persons[1].setPerson("Angela", 734343, 54);
    persons[2].setPerson("Barry", 324342, 45);
    persons[3].setPerson("David", 645345, 65);
    persons[4].setPerson("Michael", 343413, 18);
    persons[5].setPerson("Bridget", 443212, 87);
    persons[6].setPerson("Maria", 234356, 54);
    persons[7].setPerson("Zander", 888565, 45);
    persons[8].setPerson("Wiley", 956745, 65);
    persons[9].setPerson("Ricardo", 113434, 18);

    printArray(persons, NUM_PERSONS);

    sortByName(persons, NUM_PERSONS);
    printArray(persons, NUM_PERSONS);

    sortById(persons, NUM_PERSONS);
    printArray(persons, NUM_PERSONS);

    sortByAge(persons, NUM_PERSONS);
    printArray(persons, NUM_PERSONS);

    return 0;
}

// bubble sort
void sortByName(Person arr[], int size)
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
            if (arr[count].getName() > arr[count + 1].getName())
            {
                // Swap the contents of array[count] and array[count + 1]
                Person temp = arr[count];
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

// selection sort
void sortById(Person arr[], int size)
{
    // For startScan = 0 to the next-to-last array subscript
    for (int startScan = 0; startScan < size - 1; ++startScan)
    {
        // Set minIndex to startScan
        int minIndex = startScan;
        // Set minValue to array[startScan]
        Person minValue = arr[startScan];
        // For index = (startScan + 1) to the last subscript in the array
        for (int index = startScan + 1; index < size; ++index)
        {
            // If array[index] is less than minValue
            if (arr[index].getId() < minValue.getId()) // what key field
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

// insertion sort
void sortByAge(Person arr[], int size)
{
    // For startScan = 1 to the last subscript in the array
    for (int startScan = 1; startScan < size; ++startScan)
    {
        // Set key to array[startScan]
        Person key = arr[startScan];
        // Set index = startScan - 1
        int index = startScan - 1;
        // While index is greater than or equal first subscript and array[index] is greater than key
        while (index >= 0 && arr[index].getAge() > key.getAge()) // which key field
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

void printArray(const Person arr[], int size)
{
    cout << left << setw(10) << "NAME" << setw(6) << "ID#" 
         << setw(5) << right << "AGE" << '\n';
    cout << "=====================\n";
    for (int i = 0; i < size; ++i)
    {
        cout << setw(10) << left << arr[i].getName() 
             << setw(6) << right << arr[i].getId() 
             << setw(5) << right << arr[i].getAge() << '\n';
    }
    cout << '\n';
}
