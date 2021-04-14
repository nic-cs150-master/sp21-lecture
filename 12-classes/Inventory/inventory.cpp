#include "inventory.h"

InventoryItem::InventoryItem()
{
    // initialization
    mPartNum = 0;
    mDescription = ""; // empty string
    mOnHand = 0;
    mPrice = 0.0;
}

InventoryItem::InventoryItem(int p, string d, int oH, double cost)
{
    storeInfo(p, d, oH, cost);
}

void InventoryItem::storeInfo(int p, string d, int oH, double cost)
{
    mPartNum = p;
    mDescription = d;

    if (oH < 0)
    {
        mOnHand = 0;
    }
    else
    {
        mOnHand = oH;
    }

    if (cost <= 0)
    {
        mPrice = 0;
    }
    else
    {
        mPrice = cost;
    }
}

int InventoryItem::getPartNum() const
{
    return mPartNum;
}

string InventoryItem::getDescription() const
{
    return mDescription;
}

int InventoryItem::getOnHand() const
{
    return mOnHand;
}

double InventoryItem::getPrice() const
{
    return mPrice;
}
