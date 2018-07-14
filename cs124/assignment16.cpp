/***********************************************************************
* Program:
*    Assignment 16, Tax Bracket
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    This program computes the user's tax bracket based on their income.
*    In main() their income is retrieved, and in computeTax() their
*    bracket is calculated and returned.
*
*    Estimated:  0.10 hrs   
*    Actual:     0.16 hrs
*      This project was quite straight-forward. I learned how useful the
*      return function can be in modularization.
************************************************************************/

#include <iostream>
//#include <iomanip>
using namespace std;


/**********************************************************************
* computeTax() takes a parameter when called, then compares the parameter
* through a series of if and if else statements until one returns true
* then the function closes.
***********************************************************************/
int computeTax (int income)
{
   if(/*0<=income &&*/ income<=15100)
   {
      return 10;
   }
   else if (15100<income && income<=61300)
   {
      return 15;
   }
   else if (61300<income && income<=123700)
   {
      return 25;
   }
   else if (123700<income && income<=188400)
   {
      return 28;
   }
   else if (188400<income && income<=336500)
   {
      return 33;
   }
   else if (336500<income)
   {
      return 35;
   }
   
}

/**********************************************************************
* main() prompts the user for their income, then uses that input as the
* parameter for the computeTax() function. The result is displayed in
* the console based on the value returned by computeTax().
***********************************************************************/
int main()
{
   int userincome;
   cout << "Income: ";
   cin >> userincome;
   cout << "Your tax bracket is " << computeTax(userincome) << "%" << endl;
   return 0;
}
