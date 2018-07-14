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

void getEuros(double euro[])
{
   cout << "Please enter 4 dollar values in euros: " << endl; 
   for (int x = 0; x < 4; x++)
   {
      cin >> euro[x];
   }
}

void convertToDollar(double dollar[])
{
   for (int x = 0; x < 4; x++)
   {
      dollar[x] = dollar[x] * 1.24;
   }
}

void display(double value[])
{
   cout << "This is the dollar value in USD:" << endl;
   for (int x = 0; x < 4; x++)
   {
      cout << value[x] << endl;
   }
}

int main()
{
   double value[3];
   getEuros(value);
   convertToDollar(value);
   display(value);
   return 0;
}
