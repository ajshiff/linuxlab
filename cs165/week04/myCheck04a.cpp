/***********************************************************************
* Program:
*    Checkpoint 04a, Classes and Book Class
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Book
{
   private:
   string title;
   string author;
   public:
   void prompt()
   {
      cout << "Title: ";
      getline(cin, title);
      cout << "Author: ";
      getline(cin, author);
   }
   void display()
   {
      cout << "\"" << title << "\" by " << author << endl;
   }
};

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Book myBook;
   myBook.prompt();
   myBook.display();
   return 0;
}
