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

/*********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 **********************************************************************/
void staticPrintFile()
{
   ifstream fin("text.txt");
   // ifstream fin;
   // fin.out("text.txt);
   float num[10];
   for (int x = 0; x < 10; x++)
   {
      fin >> num[x];
      cout << num[x] << endl;
   }
}

/**********************************************************************
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 **********************************************************************/
void getFileName(char textArray[])
{
   cin >> textArray;
}

/**********************************************************************
 * 
 **********************************************************************/
int main()
{
   char text[1000];
   getFileName(text);
   cout << text << endl;
   float num;
   ifstream fin(text);
   fin >> num;
   cout << num << endl;
// staticPrintFile();   
   return 0;
}
















