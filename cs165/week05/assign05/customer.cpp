// File: customer.cpp
#include <string>
#include <iostream>
#include "customer.h"
#include "address.h"
using namespace std;
// Put the method bodies for your customer class here

/***************************************************************
 * Empty Parameter Constructor sets default variable values
 ***************************************************************/
Customer :: Customer()
{
   name = "unspecified";
   address = Address();
}

/***************************************************************
 * Full Parameter Constructor sets variables to user-specified values
 ***************************************************************/
Customer :: Customer(string setName, Address setAddress)
{
   name = setName;
   address = setAddress;
}

/***************************************************************
 * method to edit class variable of name
 ***************************************************************/
void Customer :: setName (string setName)
{
   name = setName;
}

/***************************************************************
 * method to edit class variable of address
 ***************************************************************/
void Customer :: setAddress (Address setAddress)
{
   address = setAddress;
}

/***************************************************************
 * method gives a the user a copy of the variable name
 ***************************************************************/
string Customer :: getName ()
{
   return name;
}

/***************************************************************
 * method gives a the user a copy of the variable address
 ***************************************************************/
Address Customer :: getAddress ()
{
   return address;
}

/***************************************************************
 * displays the customer's shipping label.
 ***************************************************************/
void Customer :: display ()
{
   cout << name << endl 
        << address.getStreet() << endl
        << address.getCity() << ", " << address.getState()
        << " " << address.getZip() << endl;
}