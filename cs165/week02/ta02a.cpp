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
#include <string>
using namespace std;


struct Scripture
{  
   string name;
   int chapter;
   int verse;
};

Scripture promptScripture()
{
   Scripture userScripture;
   cout << "Enter Scripture Book: ";
   cin >> userScripture.name;
   cout << "Enter Chapter Number: ";
   cin >> userScripture.chapter;
   cout << "Enter Verse Number: ";
   cin >> userScripture.verse;
   return userScripture;
}

void displayScripture(Scripture userScripture)
{
   cout << userScripture.name << " " << userScripture.chapter << ":" << userScripture.verse << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   Scripture firstScrip;
   firstScrip.name = "Alma";
   firstScrip.chapter = 31;
   firstScrip.verse = 5;
   Scripture secondScrip = promptScripture();
   displayScripture(secondScrip);
   return 0;
}
