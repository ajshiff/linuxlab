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
#include <string>
#include "date.h"
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int m, d, y;
   cout << "Month: ";
   cin >> m;
   cout << "Day: ";
   cin >> d;
   cout << "Year: ";
   cin >> y;
   cout << endl;
   Date date;
   date.set(m, d, y);
   date.displayAmerican();
   date.displayEuropean();
   date.displayISO();
   return 0;
}
