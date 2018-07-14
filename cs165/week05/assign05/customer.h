// File: customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "address.h"
using namespace std;
// put your Customer class here
class Customer
{
   private:
   string name;
   Address address;
   public:
   // constructors
   Customer();
   Customer(string, Address);
   // setters
   void setName(string);
   void setAddress(Address);
   // getters
   string getName();
   Address getAddress();
   // display methods
   void display();
};
#endif