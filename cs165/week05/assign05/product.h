/***************************************************************
 * File: product.h
 * Author: Aaron Shiffler
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

// put your class definition here
class Product
{
   private:
   string name;
   string description;
   double weight;
   double basePrice;
   public:
   // constructors
   Product();
   Product(string, string, double, double);
   // other methods
   double getSalesTax ();
   double getShippingCost ();
   double getTotalPrice ();
   // display methods
   void displayAdvertising ();
   void displayInventory ();
   void displayReceipt ();
   // setters
   void setName(string);
   void setDescription(string);
   void setBasePrice(double);
   void setWeight(double);
   // getters
   string getName();
   string getDescription();
   double getBasePrice();
   double getWeight();
};
#endif