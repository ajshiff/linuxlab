/***********************************************************************
* Program:
*    Checkpoint 03a, Error Handling 
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
//#include <string>
using namespace std;

int prompt () {
   int input = 0;
   cout << "Enter a number: ";
   cin >> input;

   if (input < 0) {
      throw string("The number cannot be negative.");
   } else if (input > 100) {
      throw string("The number cannot be greater than 100.");
   } else if (input % 2 != 0) {
      throw string("The number cannot be odd.");
   }

   return input;

}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{  
   int number = 0;
   try 
   {
      number = prompt(); 
      cout << "The number is " << number << '.' << endl;
   } 
   catch(string message) 
   {
      cout << "Error: " << message << endl;
   }
//   cout << "The number is " << number << '.' << endl;
   return 0;
}
