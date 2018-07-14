/***************************************************************
 * File: product.cpp
 * Author: Aaron Shiffler
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include "product.h"
using namespace std;

/***************************************************************
 * This will prompt for and fill all information that the user
 * needs to provide in order for the program to fulfil it's functions
 * defined in other functions below.
 ***************************************************************/
Product :: Product ()
{
   cout << "Enter name: ";
   getline(cin, name);
   cout << "Enter description: ";
   getline(cin, description);
   cout << "Enter weight: ";
   cin >> weight;
   do {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Enter price: ";
      cin >> basePrice;
   } while (cin.fail() || basePrice < 0);
}

/***************************************************************
 * This calculates sales tax for an item based on it's basePrice
 * and a 6% tax.
 ***************************************************************/
double Product :: getSalesTax ()
{
   double salesTax = basePrice * 0.06;
   return salesTax;
}

/***************************************************************
 * This calculates shipping cost based on item weight. 
 * Under 5lbs = 2$, more than that = $2 - ((weight - 5lbs) * $0.10)
 ***************************************************************/
double Product :: getShippingCost ()
{
   double shippingCost;
   if (weight > 5) 
   {
      shippingCost = 2 + ((weight - 5) * 0.1);
   }
   else
   {
      shippingCost = 2;
   }
   return shippingCost;
}

/***************************************************************
 * This calcuates the cost of the item after basePrice, tax, and 
 * shipping have been added together.
 ***************************************************************/
double Product :: getTotalPrice ()
{
   return basePrice + getSalesTax() + getShippingCost();
}

/***************************************************************
 * This displays the described product in a way optimised for
 * advertising. 
 ***************************************************************/
void Product :: displayAdvertise ()
{
   cout << name << " - " << '$' << basePrice << endl 
        << '(' << description << ')' << endl;
}

/***************************************************************
 * This displays the described product in a way optimised for
 * keeping inventory. 
 ***************************************************************/
void Product :: displayInventory ()
{
   cout << '$' << basePrice << " - " << name << " - " << weight << " lbs" << endl;
}

/***************************************************************
 * This displays the described product in a way optimised for
 * showing the customer the price break down for the total price. 
 ***************************************************************/
void Product :: displayReceipt ()
{
   cout << fixed << showpoint << setprecision(2);
   cout << name << endl;
   cout << "  Price:         " << "$" << setw(8) << basePrice << endl;
   cout << "  Sales tax:     " << "$" << setw(8) << getSalesTax() << endl;
   cout << "  Shipping cost: " << "$" << setw(8) << getShippingCost() << endl;
   cout << "  Total:         " << "$" << setw(8) << getTotalPrice() << endl;
}
