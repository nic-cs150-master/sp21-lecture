#ifndef INVENTORY_H
#define INVENTORY_H

// inventoryitem.h
#include <iostream>
#include <string>
using namespace std;

class InventoryItem
{
public:
    InventoryItem();
    InventoryItem(int p, string d, int oH, double cost);
    void storeInfo(int p, string d, int oH, double cost); // setter
    // all getter functions,or functions that do not modify
    // the member variables needs to be a constant function
    int getPartNum() const;
    string getDescription() const;
    int getOnHand() const;
    double getPrice() const;

private:
    int mPartNum;         // Part number
    string mDescription;  // Item description
    int mOnHand;          // Units on hand
    double mPrice;        // Unit price
};

#endif