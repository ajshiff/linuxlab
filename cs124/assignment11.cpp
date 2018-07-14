/***********************************************************************
* Program:
*    Assignment 11, Static Budget Displayer
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    This program prints a static table of Items and Projected costs to the console. It has a tab a the beginning of each line. The numeric values are aligned-right and always have 2 decimal points.
*
*    Estimated:  0.5 hrs   
*    Actual:     1.0 hrs
*      Playing with the functions, setpercision() and setw() to learn how they behave was the most time consuming. The most challenging to figure out was how to keep the decimal point in the numeric value and keeping it to 2 decimal points- I had to research that. I tried to organize it in such a way where I could easily swap the numeric values out for variables in the next assignment.
************************************************************************/

#include <iostream> //cout, fixed
using namespace std;
#include <iomanip> //setw(), setprecision()

/**********************************************************************
 * This functions outputs a static table of items and expected expenses associated with each item.
 ***********************************************************************/
int main()
{
//Output table of items and projected costs
//There is a total of 25 characters per line, 13 under the first column, 2 spaces separating the two columns, and 10 in the second column. Additionally, there is a new-line char at the end of each line, and a tab-char at the beginning of each new line.
cout << fixed << showpoint << setprecision(2) << "\tItem           Projected" << "\n\t" << "=============  ==========" << "\n\t" << "Income         $"<< setw(9) << 1000.00  << "\n\t" << "Taxes          $" << setw(9) << 100.00  << "\n\t" <<"Tithing        $" << setw(9) << 100.00  << "\n\t" << "Living         $" << setw(9) << 650.00  << "\n\t" << "Other          $" << setw(9) << 90.00  << "\n\t" << "=============  ==========" << "\n\t" << "Delta          $" << setw(9) << 60.00  << "\n";
   return 0;
}
