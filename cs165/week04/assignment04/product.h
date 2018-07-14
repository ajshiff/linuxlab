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
   Product();
   double getSalesTax ();
   double getShippingCost ();
   double getTotalPrice ();
   void displayAdvertise ();
   void displayInventory ();
   void displayReceipt ();
};
#endif
