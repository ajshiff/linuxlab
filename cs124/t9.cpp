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

#include <iostream>
#include <cstdlib> // rand()
//#include <iomanip> 
using namespace std;

/**********************************************************************
*   
***********************************************************************/
bool isFavorite(int guess)
{
   int favorite = 10;
   if (guess == favorite)
   {
      return true;
   }
   else
   {
      if (guess < favorite)
      {cout << "Too low" << endl;}
      else
      {cout << "Too high" << endl;}
      return false;
   }
}

/**********************************************************************
*   
***********************************************************************/
int main()
{
   int guess;
   do
   {
   cout << "Try to guess my favorite number! : ";
   cin >> guess;
   }
   while(isFavorite(guess) != true);
   cout << rand() << endl;
   cout << rand() / 100000000 << endl;
   cout << rand() << endl;
   cout << rand() / 100000000 << endl;
   return 0;
}
