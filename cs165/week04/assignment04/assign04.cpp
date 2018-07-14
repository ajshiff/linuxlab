/***********************************************************************
* Program:
*    Assignment 04, Products
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    This program takes declares a Product object, asks the user to fill in its
*    information, then displays it using the specified profile, as implemented in
*    product.cpp.
*
*    Estimated:  3.0 hrs   
*    Actual:     3.0 hrs
*    The most difficult part was figuring how to link the definitions to
*    the method implemenatation and tying it back into main.
************************************************************************/

#include <iostream>
#include "product.h"
using namespace std;

/**********************************************************************
 * main declares a Product object and displays the profile of the declared 
 * object based on the requested output method (by typing 1, 2, or 3).
 ***********************************************************************/
int main()
{
   int input;
   Product product;
   cout << endl;
   cout << "Choose from the following options:" << endl
        << "1 - Advertising profile" << endl
        << "2 - Inventory line item" << endl
        << "3 - Receipt" << endl;
   cout << endl << "Enter the option that you would like displayed: ";
   cin >> input;
   cout << endl;
   if (input == 1)
   {
      product.displayAdvertise();
   }
   else if (input == 2) 
   {
      product.displayInventory();
   }
   else if (input == 3) 
   {
      product.displayReceipt();
   }
   else 
   {
      cout << "Invalid input. Program Terminating..." << endl;
   }

   return 0;
}
