/***********************************************************************
* Program:
*    Checkpoint 01a, C++ Basics
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream> 
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: Prompt user for personal information, and reorganizie it for them.
 ***********************************************************************/
int main()
{
   char name[16];
   int age;
   cout << "Hello CS 165 World!" << endl;
   cout << "Please enter your first name: ";
   cin >> name;
   cout << "Please enter your age: ";
   cin >> age;
   cout << endl << "Hello " << name << ", you are " 
        << age << " years old." << endl;
   return 0;
}
