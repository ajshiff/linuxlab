/***********************************************************************
* Program:
*    Checkpoint 04b, Classes and Book Class
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <iomanip>
#include "date.h"
using namespace std;

void Date::set(int setMonth, int setDay, int setYear)
{
   month = setMonth;
   day = setDay;
   year = setYear;
}

void Date::displayAmerican()
{
   cout << setfill('0');
   cout << setw(2) << month << '/' 
        << setw(2) << day << '/' 
        << setw(4) << year << endl;
}

void Date::displayEuropean()
{
   cout << setfill('0');
   cout << setw(2) << day << '/' 
        << setw(2) << month << '/' 
        << setw(4) << year << endl;}

void Date::displayISO()
{
   cout << setfill('0');
   cout << setw(4) << year << '-' 
        << setw(2) << month << '-' 
        << setw(2) << day << endl;}