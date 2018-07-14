/***********************************************************************
* Program:
*    Checkpoint 00, Template
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

class example
{
   private:
   int num;
   bool truthy;
   char letter;

   public:
   void populateDefaultValues();
   int numberfunction();
   void another();
   void thing();
   void five();
   void six(); 
};

void example::another()
{
   cout << "This is my 'another' funciton." << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   example foo;
   foo.another();
   return 0;
}
