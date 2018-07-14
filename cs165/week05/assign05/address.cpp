// File: address.cpp
#include <string>
#include <iostream>
#include "address.h"
using namespace std;
// Put your method bodies for the address class here

/***************************************************************
 * Empty Parameter Constructor sets default variable values
 ***************************************************************/
Address :: Address()
{
   street = "unknown";
   city = "";
   state = "";
   zip = "00000";
}

/***************************************************************
 * Full Parameter Constructor sets variables to user-specified values
 ***************************************************************/
Address :: Address(string setStreet, string setCity, 
                   string setState, string setZip)
{
   street = setStreet;
   city = setCity;
   state = setState;
   zip = setZip;
}

/***************************************************************
 * method to edit class variable of street
 ***************************************************************/
void Address :: setStreet (string setStreet)
{
   street = setStreet;
}

/***************************************************************
 * method to edit class variable of city
 ***************************************************************/
void Address :: setCity (string setCity)
{
   city = setCity;
}

/***************************************************************
 * method to edit class variable of state
 ***************************************************************/
void Address :: setState (string setState)
{
   state = setState;
}

/***************************************************************
 * method to edit class variable of zip
 ***************************************************************/
void Address :: setZip (string setZip)
{
   zip = setZip;
}

/***************************************************************
 * method gives a the user a copy of the variable street
 ***************************************************************/
string Address :: getStreet()
{
   return street;
}

/***************************************************************
 * method gives a the user a copy of the variable city
 ***************************************************************/
string Address :: getCity()
{
   return city;
}

/***************************************************************
 * method gives a the user a copy of the variable state
 ***************************************************************/
string Address :: getState()
{
   return state;
}

/***************************************************************
 * method gives a the user a copy of the variable zip
 ***************************************************************/
string Address :: getZip()
{
   return zip;
}

/***************************************************************
 * displays the customer's address
 ***************************************************************/
void Address :: display()
{
   cout << street << endl 
        << city << ", " << state << " " << zip << endl;
}