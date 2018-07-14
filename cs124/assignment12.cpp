/***********************************************************************
* Program:
*    Assignment 12, Input & Variables - How Much Money Do You Make?
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    This program asks the user how much money they make, then tells them how much money they make. It always shows the decimal, the dollar amount is alligned right, and the decimal will always only be 2 spaces.
*
*    Estimated:  0.25 hrs   
*    Actual:     0.16 hrs
*      This assignement was extremely straight-forward and intuitive. I used the tools from assignment 11 to properly allign everything. Using the cin prompt I could easily obtain the desired input from the user.
************************************************************************/

#include <iostream> //cout, fixed
using namespace std;
#include <iomanip> //setw(), setprecision()

/**********************************************************************
 * This function, main(), asks the user how much they make, records their response, then prints it in a neat manner.
 ***********************************************************************/
int main()
{
//
double income;
cout << fixed << showpoint << setprecision(2) << "\tYour monthly income: ";
cin >> income;
cout << fixed << showpoint << setprecision(2) << "Your income is: $" << setw(9) << income << "\n";
return 0;
}
