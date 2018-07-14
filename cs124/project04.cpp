/***********************************************************************
* Program:
*    Project 04, Budget Project
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    This program gets budget information from the user, processes it,
*    then displays the information on table.
*
*    Estimated:  0.25 hrs   
*    Actual:     0.5 hrs
*      I first used this format to calculate the boolean of the if statement:
*      #1 <= income < #2
*      After trying to figure out why it wasn't working for about 15 minutes,
*      I realized that it was because I needed to make the two parameters into
*      two statements with the &&. 
*      #1 <= income && income < #2
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * programIntroduction() displays the first two lines in the program,
 * informing the user the purpose of the program.
 ***********************************************************************/
void programIntroduction()
{
   cout << "This program keeps track of your monthly budget" << endl;
   cout << "Please enter the following:" << endl;
}

/**********************************************************************
 * getIncome() Prompts the user for their monthly income, stores it, then
 * returns the value. 
 ***********************************************************************/
double getIncome()
{
   double income;
   cout << "\tYour monthly income: ";
   cin >> income;
   return income;
}

/**********************************************************************
 * getBudgetLiving prompts the user for their budgeted living expenses,
 * stores it, then returns the value.
 ***********************************************************************/
double getBudgetLiving()
{
   double budgetLiving;
   cout << "\tYour budgeted living expenses: ";
   cin >> budgetLiving;
   return budgetLiving;
}

/**********************************************************************
 * getActualLiving() prompts the user for their budgeted living expenses,
 * stores it, then returns the value.
 ***********************************************************************/
double getActualLiving()
{
   double actualLiving;
   cout << "\tYour actual living expenses: ";
   cin >> actualLiving;
   return actualLiving;
}

/**********************************************************************
 * getActualTax prompts the user for how much tax they actually paid,
 * stores it, and returns the value.
 * *********************************************************************/
double getActualTax()
{
   double actualTax;
   cout << "\tYour actual taxes withheld: ";
   cin >> actualTax;
   return actualTax;
}

/**********************************************************************
 * getActualTithing() prompts the user for how much money they actually
 * tithed, stores it, then returns that value.
 ***********************************************************************/
double getActualTithing()
{
   double actualTithing;
   cout << "\tYour actual tithe offerings: ";
   cin >> actualTithing;
   return actualTithing;
}

/**********************************************************************
 * getActualOther() prompts the user for how much money they spent on other
 * categories not listed above, stores it, then returns that value.
 ***********************************************************************/
double getActualOther()
{
   double actualOther;
   cout << "\tYour actual other expenses: ";
   cin >> actualOther;
   return actualOther;
}

/**********************************************************************
 * computeTax() takes a variable, income, and uses it to compute the tax
 * bracket the user falls into, and returns how much tax they need to pay.
 ***********************************************************************/
double computeTax(double monthlyIncome)
{
   double yearlyIncome = (monthlyIncome * 12);
   double yearlyTax;
   double monthlyTax;
   if (0 <= yearlyIncome && yearlyIncome < 15100)
   {
      yearlyTax = yearlyIncome * 0.10;
   }
   else if (15100 <= yearlyIncome && yearlyIncome < 61300)
   {
      yearlyTax = (1510 + (0.15 * (yearlyIncome - 15100)));
   }
   else if (61300 <= yearlyIncome && yearlyIncome < 123700)
   {
      yearlyTax = (8440 + (0.25 * (yearlyIncome - 61300)));
   }
   else if (123700 <= yearlyIncome && yearlyIncome < 188450)
   {
      yearlyTax = (24040 + (0.28 * (yearlyIncome - 123700)));
   }
   else if (188450 <= yearlyIncome && yearlyIncome < 336550)
   {
      yearlyTax = (42170 + (0.33 * (yearlyIncome - 188450)));
   }
   else if (336550 <= yearlyIncome)
   {
      yearlyTax = (91043 + (0.35 * (yearlyIncome - 336550)));
   }
   monthlyTax = (yearlyTax / 12);
   return monthlyTax;
}

/**********************************************************************
 * computeTithing() takes a variable, income, and uses it to compute
 * how much tithing they would need to pay to be a full tithe payer,
 * and returns that value.
 ***********************************************************************/
double computeTithing(double income)
{  
   double tenPercent = income * 0.1;
   return tenPercent;
}

/**********************************************************************
 * display() receives all of the user's given info from main, and uses it
 * to calculate the remaining budget items that the user didn't explicitly
 * give. Then now having all of the needed budget info, display's it neatly
 * on a table.
 ***********************************************************************/
void display(double income, double budgetLiving, double actualLiving, 
             double actualTax, double actualTithing, double actualOther)
{
   double budgetTax = computeTax(income);
   double budgetTithing = computeTithing(income);
   double budgetOther = income - budgetTax - budgetTithing - budgetLiving;
   double actualDifference = income - actualTax - actualTithing 
                           - actualLiving - actualOther;
   double budgetDifference = 0;
   cout << endl;
   cout << "The following is a report on your monthly expenses" << endl;  
   cout << showpoint << fixed << setprecision(2);

   cout << "\tItem           " << " " << "      Budget   "                
                 << " " << "      Actual"                 << endl;
  
   cout << "\t===============" << " " << "==============="                
                 << " " << "==============="              << endl;

   cout << "\tIncome         " << " " << "$" << setw(11) << income     
        << "   " << " " << "$" << setw(11) << income     << endl;

   cout << "\tTaxes          " << " " << "$" << setw(11) << budgetTax      
        << "   " << " " << "$" << setw(11) << actualTax      << endl;

   cout << "\tTithing        " << " " << "$" << setw(11) << budgetTithing    
        << "   " << " " << "$" << setw(11) << actualTithing    << endl;

   cout << "\tLiving         " << " " << "$" << setw(11) << budgetLiving     
        << "   " << " " << "$" << setw(11) << actualLiving     << endl;

   cout << "\tOther          " << " " << "$" << setw(11) << budgetOther      
        << "   " << " " << "$" << setw(11) << actualOther      << endl;

   cout << "\t===============" << " " << "==============="                
                 << " " << "==============="              << endl;

   cout << "\tDifference     " << " " << "$" << setw(11) << budgetDifference 
        << "   " << " " << "$" << setw(11) << actualDifference << endl;
}

/**********************************************************************
 * main() runs the entire program first by introducing the program, asking
 * the user for 6 budget items and storing their value, then passing those
 * values into display() to be processed and displayed.
 ***********************************************************************/
int main()
{
   programIntroduction();
   double income = getIncome();
   double budgetLiving = getBudgetLiving();
   double actualLiving = getActualLiving();
   double actualTax = getActualTax();
   double actualTithing = getActualTithing();
   double actualOther = getActualOther();
   display(income, budgetLiving, actualLiving, 
           actualTax, actualTithing, actualOther);
   return 0;
}
