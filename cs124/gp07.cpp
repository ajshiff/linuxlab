/***********************************************************************
* Program:
*    Assignment 00, Program Name
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream> //cout, cin, fixed 
//#include <iomanip> //setprecision(), setw(),
using namespace std;

bool isLeap(int year)
{
   if(year % 4 == 0)
   {
      if (year % 100 == 0)
      {
         if (year % 400 == 0)
         {
            return true;
         }
         else
         {
            return false;
         }
      }
      else
      {
         return true;
      }
   }
   else
   {
      return false;
   }
}
void normLeapHeader()
{
   cout << "Normal\tLeap" << endl;
}
int main()
{
   normLeapHeader();
   for (int year = 1753; year <= 2018; year++)
   {
      if (isLeap(year))
      {
         cout << "\t" << year << endl;
      } 
      else
      {
         cout << year << endl;
      }
   }
   return 0;
}
