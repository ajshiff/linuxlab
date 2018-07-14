/***********************************************************************
* Program:
*    Assignment 13 , Fahrenheit to Celsius
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary:
*       This program takes a user input to convert fahrenheit to celsius.
*       I think that writing this header will take the longest.
*       Everything takes place in main().
*    Estimated:  0.1 hrs   
*    Actual:     0.1 hrs
*      The most difficult part was learning how to correctly spell fahrenheit and celsius.
************************************************************************/

#include <iostream>
#include <iomanip> //setprecision(x);
using namespace std;

/**********************************************************************
 * First prompt the user for fahrenheit. Print Fahrenheit in celsius by 
 * running fahrenheit variable through equation. Use a double to maintain decimal.
 ***********************************************************************/
int main()
{
   double fahrenheit;
   cout << "Please enter Fahrenheit degrees: ";
   cin >> fahrenheit;
   cout << fixed << setprecision(0) << "Celsius: " << (5.0/9.0)*(fahrenheit-32) << "\n";
   return 0;
}
