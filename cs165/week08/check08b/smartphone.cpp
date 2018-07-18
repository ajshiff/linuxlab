/*******************
 * smartphone.cpp
 *******************/
#include <iostream>
#include <string>
#include "smartphone.h"
using namespace std;

// TODO: Put your SmartPhone methods heres
SmartPhone :: SmartPhone()
{
   email = "fakeemail@namespace.com";
}
void SmartPhone :: prompt()
{
   promptNumber();
   cout << "Email: ";
   cin.ignore();
   getline(cin, email);
}

void SmartPhone :: display()
{
   Phone::display();
   cout << email << endl;
}
