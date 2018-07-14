/***********************************************************************
* Program:
*    Assignment 00, Program Name
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    A Program that gives your terminal a blank slate.
*    
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
//#include <iomanip>
using namespace std;

/**********************************************************************
 * This enters 50 new lines to ensure that your screen is blank and beautiful.
 ***********************************************************************/
int main()
{
   int x = 0;
   while (x<50){
      cout << "\n";
      x=x+1;
   } 
   return 0;
}
