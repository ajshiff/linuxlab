/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

/*****************************************************************
 * 
 ****************************************************************/
Money :: Money()
{
   dollars = 0;
   cents = 0;
}
Money :: Money(int setDollars)
{
   if (setDollars < 0) {
      dollars = setDollars * -1;
   } else {
      dollars = setDollars;
   }
   cents = 0;
}
Money :: Money(int setDollars, int setCents)
{
   if (setDollars < 0) {
      dollars = setDollars * -1;
   } else {
      dollars = setDollars;
   }
   if (setCents < 0) {
      cents = setCents * -1;
   } else {
      cents = setCents;
   }
}
/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: display() const 
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}

/*****************************************************************
 * 
 ****************************************************************/
int Money :: getDollars() const
{
   return dollars;
}

/*****************************************************************
 * 
 ****************************************************************/
int Money :: getCents() const
{
   return cents;
}

/*****************************************************************
 * 
 ****************************************************************/
void Money :: setDollars(int newDollars)
{
   if (newDollars < 0) {
      dollars = newDollars * -1;
   } else {
      dollars = newDollars;
   }
}

/*****************************************************************
 * 
 ****************************************************************/
void Money :: setCents(int newCents)
{
   if (newCents < 0) {
      cents = newCents * -1;
   } else {
      cents = newCents;
   }
   
}
