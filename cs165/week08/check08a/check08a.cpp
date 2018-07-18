/***********************************************************************
* Program:
*    Checkpoint 08a, Inheritance
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your Book class here
class Book
{
private:
   string title;
   string author;
   string publicationYear;
public:
   Book()
   {
      promptBookInfo();
   }
   void promptBookInfo()
   {
      cout << "Title: ";
      getline(cin, title);
      cout << "Author: ";
      getline(cin, author);
      cout << "Publication Year: ";
      getline(cin, publicationYear);
   };
   void displayBookInfo()
   {
      cout << title << " (" << publicationYear << ") by " << author << endl;
   };
   void displayAll()
   {
      displayBookInfo();
   };
};

// TODO: Define your TextBook class here
class TextBook : Book
{
   private:
      string subject;
   public:
      TextBook()
      {
         promptSubject();
      }
      void promptSubject()
      {
         cout << "Subject: ";
         getline(cin, subject);
      }
      void displaySubject()
      {
         cout << "Subject: " << subject << endl;
      }
      void displayAll() 
      {
         displayBookInfo();
         displaySubject();
      }
};

// TODO: Add your PictureBook class here
class PictureBook : Book
{
   private:
      string illustrator;
   public:
      PictureBook()
      {
         promptIllustrator();
      }
      void promptIllustrator()
      {
         cout << "Illustrator: ";
         getline(cin, illustrator);
      }
      void displayIllustrator()
      {
         cout << "Illustrated by " << illustrator << endl;
      }
      void displayAll()
      {
         displayBookInfo();
         displayIllustrator();
      }
};

void skipLine()
{
   cout << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare a Book object here and call its methods
   Book normalBook;
   skipLine();
   normalBook.displayAll();
   skipLine();
   // Declare a TextBook object here and call its methods
   TextBook textBook;
   skipLine();
   textBook.displayAll();
   skipLine();
   // Declare a PictureBook object here and call its methods
   PictureBook pictureBook;
   skipLine();
   pictureBook.displayAll();

   return 0;
}


