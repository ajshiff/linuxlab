/*********************
 * phone.cpp
 *********************/
#include "phone.h"
#include <iostream>
using namespace std;
// TODO: Put your phone class methods here...

Phone :: Phone ()
{
   areaCode = 111;
   prefix = 222;
   suffix = 3333;
}

void Phone :: promptNumber()
{
   cout << "Area Code: ";
   cin >> areaCode;
   cout << "Prefix: ";
   cin >> prefix;
   cout << "Suffix: ";
   cin >> suffix;
}

void Phone :: display()
{
   cout << "(" << areaCode << ")" << prefix << "-" << suffix << endl;
}