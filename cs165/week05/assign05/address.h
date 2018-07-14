// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;

// Put your Address class here
class Address
{
   private:
   string street;
   string city;
   string state;
   string zip;
   public:
   // constructors
   Address();
   Address(string, string, string, string);
   // setters
   void setStreet(string);
   void setCity(string);
   void setState(string);
   void setZip(string);
   // getters
   string getStreet();
   string getCity();
   string getState();
   string getZip();
   // display methods
   void display();
};
#endif