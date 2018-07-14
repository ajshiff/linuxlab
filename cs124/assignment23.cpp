/***********************************************************************
* Program:
*    Assignment 23, Adding Multiples
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    The program takes an input and adds the multiples of that input together
*    until the multiples exceed 100. 
*
*    Estimated:  0.5 hrs   
*    Actual:     0.7 hrs
*      Figuring out that I needed a second variable to store the sums apart
*      from the multiples was tricky.
************************************************************************/

#include <iostream> //cout, cin, fixed 
//#include <iomanip> //setprecision(), setw(),
using namespace std;


/**********************************************************************
 * getMultiple() receives and returns user input.
 ***********************************************************************/
int getMultiple()
{
   int uinput;
   cin >> uinput;
   return uinput;
} 

/**********************************************************************
* addTillHundred() takes a parameter and adds multiples of that parameter
* together untill its multiples exceed 100. It returns the sum of the multiples.
***********************************************************************/
int addTillHundred(int multiple)
{
   int nextMultiple = multiple; 
   int carryOver = 0;
   while(nextMultiple < 100 && multiple > 0 )
   {
      carryOver = carryOver + nextMultiple; 
      nextMultiple += multiple;
   }
   return carryOver;
}

/**********************************************************************
 * main() displays a promt for the user 
 * gathers info from the user using getMultiple()
 * uses the returned value as a parameter for addTillHundred()
 * display's addTillHundred() value on the screen.
 ***********************************************************************/
int main()
{  
   cout << "What multiples are we adding? ";
   int multiples = getMultiple();
   cout << "The sum of multiples of " << multiples << " less than 100 are: " << addTillHundred(multiples) << endl;
   return 0;
}
