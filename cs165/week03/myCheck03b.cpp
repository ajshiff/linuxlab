/***********************************************************************
* Program:
*    Checkpoint 03b, Error Handling 
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

int prompt () {
   try
   {
      int input = 0;
      cout << "Enter a number: ";
      cin >> input;
      if (cin.fail())
      {
         cin.clear();
         cin.ignore(1024, '\n');
         throw string("Invalid input.");
      }
      else
      {
         return input;
      }
   }
   catch (string message) 
   {
      cout << message << endl;
     return prompt();
   }
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{  
   int num = prompt();
   cout << "The number is " << num << "." << endl;
   return 0;
}
