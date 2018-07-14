// File: order.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include "order.h"
#include "product.h"
#include "customer.h"
using namespace std;

// Put your the method bodies for your order class here
/***************************************************************
 * Empty Parameter Constructor sets default variable values
 ***************************************************************/
Order :: Order () {
   product = Product();
   quantity = 0;
   customer = Customer();

}

/***************************************************************
 * Full Parameter Constructor sets private variables to user-specified
 * values
 ***************************************************************/
Order:: Order (Product setProduct, int setQuantity, Customer setCustomer)
{
   product = setProduct;
   quantity = setQuantity;
   customer = setCustomer;
}

/***************************************************************
 * method to edit class variable of product
 ***************************************************************/
void Order :: setProduct (Product setProduct)
{
   product = setProduct;
}

/***************************************************************
 * method to edit class variable of quantity
 ***************************************************************/
void Order :: setQuantity (int setQuantity)
{
   quantity = setQuantity;
}

/***************************************************************
 * method to edit class variable of customer
 ***************************************************************/
void Order :: setCustomer (Customer setCustomer)
{
   customer = setCustomer;
}

/***************************************************************
 * method gives a the user a copy of the variable product and all
 * associated methods.
 ***************************************************************/
Product Order :: getProduct ()
{
   return product;
}

/***************************************************************
 * method gives a the user a copy of the variable quantity
 ***************************************************************/
int Order :: getQuantity ()
{
   return quantity;
}

/***************************************************************
 * method gives a the user a copy of the variable customer and
 * access to all associated methods.
 ***************************************************************/
Customer Order :: getCustomer ()
{
   return customer;
}

/***************************************************************
 * method gives a the user a copy of the customer's zip
 ***************************************************************/
string Order :: getShippingZip ()
{
   return customer.getAddress().getZip();
}

/***************************************************************
 * method gives a the user the total price of their order, taking
 * into account how many they are ordering.
 ***************************************************************/
double Order :: getTotalPrice ()
{
   return product.getTotalPrice() * quantity;
}

/***************************************************************
 * Displays the order information optimized for a shipping label.
 ***************************************************************/
void Order :: displayShippingLabel ()
{
   customer.display();
}

/***************************************************************
 * Displays the order information in a concise way that would be
 * important to the customer and the store-owner both.
 ***************************************************************/
void Order :: displayInformation ()
{
   cout << fixed << showpoint << setprecision(2);
   cout << customer.getName() << endl 
        << product.getName() << endl 
        << "Total Price: $" << getTotalPrice() << endl;
}

