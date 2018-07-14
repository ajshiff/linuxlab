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
//#include <iomanip>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
void learning()
{
cout << "I am learning!";
}

int favnum()
{
   int unum;
   cout << "What is your favorite number?";
   cin >> unum;
   return unum;
}

void printunum(int in)
{
   cout << "My favorite number is " << in << ".";
}

void newline()
{
cout << "\n";
}


int main()
{
   int doublenum;
   learning();
   newline();
   doublenum = favnum()*2;
   printunum(doublenum);
   newline();
   return 0;
}
