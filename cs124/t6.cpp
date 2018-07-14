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
 **********************************************************************/
bool isPuppy(float age)
{
   if(age < 2)
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
   if(isPuppy(1))
   {
      cout << "Buy puppy chow." << endl;
   }
   else
   {
      cout << "Buy dog chow." << endl;
   }

   float dogAge;
   do
   {
      cout << "Enter the age of your dog: ";
      cin >> dogAge;
   }
   while(dogAge < 0);
   return 0;
}
