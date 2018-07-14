/***********************************************************************
* Program:
*    Assignment 14, Matthew 18:21-22
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    This program will address Peter's question to the Lord in 
*    Matthew 18:21-22
*
*    Estimated:  0.1 hrs   
*    Actual:     0.1 hrs
*     I didn't realize that testbed wanted "till 7 times" on a second 
*     line, so it failed the first test. After that, it was an easy fix. 
*     I understand functions and return values very well.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
* void questionPeter() prints a verse of scripture when called.
* int responseLord() returns a value which is inserted into main().
***********************************************************************/
void questionPeter()
{
   cout << "Lord, how oft shall my brother sin against me, and I forgive him?\nTill seven times?\n";
}

int responseLord()
{
   return 7*70;
}

/**********************************************************************
 * Main calls questionPeter() then prints responseLord().
 *
***********************************************************************/
int main()
{
   // ask Peter's question
   questionPeter();

   // the first part of the Lord's response
   cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
   cout << "times: but, Until " << responseLord() << ".\n";

   return 0;
}
