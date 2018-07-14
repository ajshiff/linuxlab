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
#include <iomanip> //setprecision(), setw(),
#include <fstream>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   //Declare Normal Variable
   int x = 33;
   //Declare a Pointer
   int * p;
   //Stores the address of the value of variable x in p.
   p = &x;
   //print out variable value
   cout << "x = " << x << endl;
   //print out pointed to location
   cout << "p = " << p << endl;
   //prints out the value of the pointed to location.
   cout << "*p = x = " << *p << endl;
   //this below is the same value as p.
   cout << "&x = p = " << &x << endl;
   return 0;
}
