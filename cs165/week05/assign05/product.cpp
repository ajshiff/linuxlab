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
 * Empty Parameter Constructor sets default variable values
 ***************************************************************/
Product :: Product ()
{
   name = "none";
   description = "";
   weight = 0;
   basePrice = 0;
}

/***************************************************************
 * Full Parameter Constructor sets variables to user-specified values
 ***************************************************************/
Product :: Product (string setName, string setDescription, double setPrice, double setWeight)
{
   name = setName;
   description = setDescription;
   basePrice = setPrice;
   weight = setWeight;
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
   else if (weight == 0)
   {
      shippingCost = 0;
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
void Product :: displayAdvertising ()
{
   cout << fixed << showpoint << setprecision(2);
   cout << name << " - " << '$' << basePrice << endl 
        << '(' << description << ')' << endl;
}

/***************************************************************
 * This displays the described product in a way optimised for
 * keeping inventory. 
 ***************************************************************/
void Product :: displayInventory ()
{
   cout << fixed << showpoint;
   cout << '$' << setprecision(2) << basePrice << " - " 
   << name << " - " << setprecision(1) << weight << " lbs" << endl;
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

/***************************************************************
 * method to edit class variable of
 ***************************************************************/
void Product :: setName(string setName)
{
   name = setName;
}

/***************************************************************
 * method to edit class variable of description
 ***************************************************************/
void Product :: setDescription(string setDescription)
{
   description = setDescription;
}

/***************************************************************
 * method to edit class variable of basePrice
 ***************************************************************/
void Product :: setBasePrice(double setPrice)
{
   basePrice = setPrice;
}

/***************************************************************
 * method to edit class variable of weight
 ***************************************************************/
void Product :: setWeight(double setWeight)
{
   weight = setWeight;
}

/***************************************************************
 * method gives a the user a copy of the variable name
 ***************************************************************/
string Product :: getName()
{
   return name;
}

/***************************************************************
 * method gives a the user a copy of the variable description
 ***************************************************************/
string Product :: getDescription()
{
   return description;
}

/***************************************************************
 * method gives a the user a copy of the variable basePrice
 ***************************************************************/
double Product :: getBasePrice()
{
   return basePrice;
}

/***************************************************************
 * method gives a the user a copy of the variable weight
 ***************************************************************/
double Product :: getWeight()
{
   return weight;
}