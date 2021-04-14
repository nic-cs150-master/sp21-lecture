#include <iostream>
#include <iomanip>
#include "inventory.h"
using namespace std;

void printAllItems(InventoryItem items[], int numberOfItems);
void printItem(const InventoryItem &item);
void enterItem(InventoryItem &item);
InventoryItem enterItem2();

int main()
{
    InventoryItem items[5];

    items[0].storeInfo(1001, "1/2 \" Nails", 100, 0.50);
    items[1].storeInfo(1002, "Hammer", 10, 32.50);
    items[2].storeInfo(1003, "3d printer", 5, 780.50);

    cout << setprecision(2) << fixed;
    printAllItems(items, 3);

    // Ask user to enter the last two items
    // enterItem(items[3]);
    // enterItem(items[4]);
    items[3] = enterItem2();
    items[4] = enterItem2();

    printAllItems(items, 5);

    return 0;
}

void printAllItems(InventoryItem items[], int numberOfItems)
{
    for (int i = 0; i < numberOfItems; ++i)
    {
        printItem(items[i]);
    }
}

void printItem(const InventoryItem &item)
{
    cout << item.getPartNum() << ' '
         << item.getDescription() << ' '
         << item.getOnHand() << ' '
         << "$ " << item.getPrice() << '\n';
}

void enterItem(InventoryItem &item)
{
    int partNum = 0;
    cout << "Enter part number: ";
    cin >> partNum;
    cin.ignore();

    string desc = "";
    cout << "Enter part description: ";
    getline(cin, desc);

    int numUnits = 0;
    cout << "Enter number of items on hand: ";
    cin >> numUnits;

    double price = 0.0;
    cout << "Enter cost per unit: ";
    cin >> price;

    item.storeInfo(partNum, desc, numUnits, price);
}

InventoryItem enterItem2()
{
    InventoryItem item;

    int partNum = 0;
    cout << "Enter part number: ";
    cin >> partNum;
    cin.ignore();

    string desc = "";
    cout << "Enter part description: ";
    getline(cin, desc);

    int numUnits = 0;
    cout << "Enter number of items on hand: ";
    cin >> numUnits;

    double price = 0.0;
    cout << "Enter cost per unit: ";
    cin >> price;

    item.storeInfo(partNum, desc, numUnits, price);

    return item;
}