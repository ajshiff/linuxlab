/***********************************************************************
* Program:
*    Assignment 21, Stub Functions for Car Usage
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    This program provides the foundation and the map for the working program.
*    While this code does nothing right now, all the programmer would need to 
*    do to make it work is program the individual functions because all of the
*    functions and variables get passed to the correct place already.
*
*    Estimated:  0.5 hrs   
*    Actual:     0.5 hrs
*    Plugging base fuctions with no code was new to me, I wasn't sure if 
*    I was doing it right becasue the code did nothing, but then I realized
*    that that was okay, becasue this practice is meant to just prepare the 
*    document to be programed, more quickly, cleanly, and efficiently.
************************************************************************/

#include <iostream> //cout, cin, fixed 
//#include <iomanip> //setprecision(), setw(),
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
///////////////////////////////////////
double promptTires()
{
   return 0;
}

double promptRepairs()
{
   return 0;
}

double promptGas()
{
   return 0;
}

float promptMileage()
{
   return 0;
}
///////////////////////////////////////
double getUsageCost()
{
   promptTires();
   promptRepairs();
   promptGas();
   promptMileage();
   return 0;
}
///////////////////////////////////////
double promptDevalue()
{
   return 0;
}
double promptInsurance()
{
   return 0;
}
double promptParking()
{
   return 0;
}
///////////////////////////////////////
double getPeriodicCost()
{
promptDevalue();
promptInsurance();
promptParking();
return 0;
}
///////////////////////////////////////
void display(double usage, double periodic)
{
   cout << "Success\n";
}
///////////////////////////////////////
int main()
{
   display(getUsageCost(), getPeriodicCost());
   return 0;
}
