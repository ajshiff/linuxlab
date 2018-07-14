/***********************************************************************
* Program:
*    Project 02, Monthly Budget
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
*    Actual:     1.5 hrs
*      Understanding StyleChecker's requirements took me a while to understand.
*      and making sure everything lined up as expected took some time too.
************************************************************************/

#include <iostream> //cout, cin, fixed 
#include <iomanip> //setprecision(), setw(),
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{  
   //bud budget, act actual _ Variables
   double budIncome = 0;
   double actIncome = 0;
   
   double budTaxes = 0;
   double actTaxes = 0;
   
   double budTithing = 0;
   double actTithing = 0;

   double budLiving = 0;
   double actLiving = 0;

   double budOther = 0;
   double actOther = 0;
   
   double budDifference = 0;
   double actDifference = 0;

   cout << "This program keeps track of your monthly budget" << endl;
   cout << "Please enter the following:" << endl;
   cout << "	" << "Your monthly income: ";
   cin  >> actIncome;
   budIncome = actIncome;
   cout << "	" << "Your budgeted living expenses: ";
   cin  >> budLiving;
   cout << "	" << "Your actual living expenses: ";
   cin  >> actLiving;
   cout << "	" << "Your actual taxes withheld: ";
   cin  >> actTaxes;
   cout << "	" << "Your actual tithe offerings: ";
   cin  >> actTithing;
   cout << "	" << "Your actual other expenses: ";
   cin  >> actOther;
   cout << endl;


/**********************************************************************
* setw() adds spaces before the next output item. The number of spaces
* added is equal to the argument minus the number of characters in the
* next output item.
***********************************************************************/
   cout << "The following is a report on your monthly expenses" << endl;
   //use a tab to indent each line
   cout << showpoint << fixed << setprecision(2);
   cout << "\tItem           " << " " << "      Budget   "                       << " " << "      Actual"                 << endl;
   cout << "\t===============" << " " << "==============="                       << " " << "==============="              << endl;
   cout << "\tIncome         " << " " << "$" << setw(11) << budIncome     << "   " << " " << "$" << setw(11) << actIncome     << endl;
   cout << "\tTaxes          " << " " << "$" << setw(11) << budTaxes      << "   " << " " << "$" << setw(11) << actTaxes      << endl;
   cout << "\tTithing        " << " " << "$" << setw(11) << budTithing    << "   " << " " << "$" << setw(11) << actTithing    << endl;
   cout << "\tLiving         " << " " << "$" << setw(11) << budLiving     << "   " << " " << "$" << setw(11) << actLiving     << endl;
   cout << "\tOther          " << " " << "$" << setw(11) << budOther      << "   " << " " << "$" << setw(11) << actOther      << endl; 
   cout << "\t===============" << " " << "==============="                       << " " << "==============="              << endl;
   cout << "\tDifference     " << " " << "$" << setw(11) << budDifference << "   " << " " << "$" << setw(11) << actDifference << endl;

   return 0;
}
