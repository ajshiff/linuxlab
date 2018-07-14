/***********************************************************************
* Program:
*    Assignment 00, Program Name
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream> //cout, cin, fixed 
//#include <iomanip> //setprecision(), setw(),
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
void learning()
{
   cout << "I am learning!" << endl;
}

bool greaterThan(int num1, int num2)
{
   if (num1>num2)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   int num1;
   int num2;
   learning();
   learning();
   learning();
   cout << "Enter First Number: ";
   cin >> num1;
   cout << "Enter Second Number: ";
   cin >>  num2;
   if (greaterThan(num1, num2))
   {
      cout << num1 << " is bigger than " << num2 << "." << endl ;
   }
   else
   {
      cout << num1 << " is not bigger than " << num2 << "." << endl;
   }

   return 0;
}
