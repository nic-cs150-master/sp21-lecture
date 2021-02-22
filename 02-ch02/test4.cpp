/*
Write a program that computes the sales tax and 
total price on a $95 purchase. Assume the state 
sales tax is 6.5 percent and the county sales tax is 2 percent. 
Display the purchase price, total tax, and total 
price on the screen.
*/

// variables needed:
//      purchase price = $95
//      state sales tax = 6.5%
//      county sales tax = 2%
// compute the sales tax on the total purchase price
//      total tax = state sales tax + county sales tax
//      sales tax = total sales tax * total price
//      total price = purchase price + sales tax 
// display the purchase price, total tax, and total price

#include <iostream>
using namespace std;

int main()
{
    // variables needed:
    //      purchase price = $95
    //      state sales tax = 6.5%
    //      county sales tax = 2%
    double purchasePrice = 0.0,
           stateSalesTax = 0.065,
           countySalesTax = 0.02;

    // Ask user for purchasePrice
    cout << "Enter purchase price $ ";
    cin >> purchasePrice;

    // compute the sales tax on the total purchase price
    //      total tax = state sales tax + county sales tax
    //      sales tax = total sales tax * purchase price
    //      total price = purchase price + sales tax 
    double totalTax = stateSalesTax + countySalesTax;
    // double salesTax = totalTax * purchasePrice;
    // double totalPrice = purchasePrice + salesTax;

    double totalPrice = purchasePrice + (totalTax * purchasePrice);

    // display the purchase price, total tax, and total price
    cout << "Purchase Price = " << purchasePrice << '\n'
         << "Total Tax = " << totalTax << '\n'
         << "Total Price = " << totalPrice << '\n';

    return 0;
}

