// File: order.h
#ifndef ORDER_H
#define ORDER_H

#include <string>
#include "product.h"
#include "customer.h"
using namespace std;

// Put your Order class here
class Order
{
   private:
   Product product;
   int quantity;
   Customer customer;
   public:
   //constructors
   Order();
   Order(Product, int, Customer);
   //setters
   void setProduct(Product);
   void setQuantity(int);
   void setCustomer(Customer);
   //getters
   Product getProduct();
   int getQuantity();
   Customer getCustomer();
   string getShippingZip();
   // other methods
   double getTotalPrice();
   // display methods
   void displayShippingLabel();
   void displayInformation();
};

#endif