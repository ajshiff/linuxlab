/***********************************************************************
* Program:
*    Assignment 00, Program Name
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    A program where the user  gets to guess the number that the program
*    creator was thinking of when they created the program. 
*    
*    
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
 * 
 ***********************************************************************/
int main()
{
   int uguess = 111;
   int ccreate = 7;
   bool goodguess = false;
   cout << "What number was I thinking of?: ";
   cin >> uguess;
   while (goodguess == false) {
      if (0 <= uguess && uguess <=10) {
         goodguess = true;
      } else { 
         cout << "You need to guess a number between 0-10! Try again: ";
         cin >> uguess;
      }
   }
   
   if (goodguess){
      if (uguess == ccreate)
      {
         cout << "You guessed correctly! The answer was " << ccreate << ".\n";
      } else {
         cout << "Sorry. You guessed " << uguess << ". The correct answer was " << ccreate << ".\n";
      }
   }

   return 0;
}
