/*********************
 * phone.cpp
 *********************/
#include "phone.h"
#include <iostream>
using namespace std;
// TODO: Put your phone class methods here...

void Phone :: promptNumber()
{
   cout << "Phone:" << endl;
   cout << "Area Code: ";
   cin >> areaCode;
   cout << "Prefix: ";
   cin >> prefix;
   cout << "Suffix: ";
   cin >> suffix;
}

void Phone :: display()
{
   cout << "Phone info:" << endl;
   cout << "(" << areaCode << ")" << prefix << "-" << suffix << endl;
}