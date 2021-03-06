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
float number()
{
   return 5;
}

bool divisibleByThree(float numerator)
{  
   int intnum = numerator;
   //cout << intnum/3 << endl;
   //cout <<numerator/3 << endl;
   if(numerator/3.0 == intnum/3)
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
   cout << number() << endl;
   float unum;
   cout << "Enter a number to find out if it is divisible by 3: ";
   cin >> unum;
   if (divisibleByThree(unum))
   {
      cout << "This number is divisible by 3!" << endl;
   }
   else
   {
      cout << "This number is not divisible by 3!" << endl;
   }
   
   return 0;
}
