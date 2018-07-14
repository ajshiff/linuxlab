/***********************************************************************
* Program:
*    Assignment 11, Static Budget Displayer
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
*    Estimated:  0.5 hrs   
*    Actual:     0.0 hrs
*      Learning the Syntax
************************************************************************/

#include <iostream> //cout, fixed
using namespace std;
#include <iomanip> //setw(), setprecision()
#include <fstream> // ifstream(), fin >> , 
/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 **********************************************************************/

int main()
{
   ifstream fin("text.txt");
   float num;
   for (int x = 0; x < 10; x++)
   {
      fin >> num;
     // cout << num << endl;
   }
   return 0;
}
