/***********************************************************************
* Program:
*    Assignment 01, Genetic Genealogy
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    This program compares similarity in genetic code by taking an initial
*    char[] of values and comparing it against a user-specified number of
*    other char[] and returning the percent match per array.
*
*    Estimated:  1.0 hrs   
*    Actual:     1.5 hrs
*      The most difficult part was remembering how to pass multidimensional
*      arrays into functions. Turns out I need to re-specify how long the
*      second element is to cause it to not throw an error. Using the embedded
*      for() loop in percent match was a fun feature to add and see work.
************************************************************************/

#include <iostream>
using namespace std;

/***********************************************************************
 * Prompts the user for their DNA sequence and updates the passed in array
 ***********************************************************************/
void getYourDNA(char yourDNA[])
{
   cout << "Enter your DNA sequence: ";
   cin >> yourDNA;
}

/***********************************************************************
 * prompts the user for the number of relatives that the program will expect
 * to get names and DNA patterns for.
 ***********************************************************************/
int getNumberOfRelatives()
{
   int number;
   cout << "Enter the number of potential relatives: ";
   cin >> number;
   return number;
}

/***********************************************************************
 * Prompt user for names for each person who's DNA 
 * sample will be evaluated for
 ***********************************************************************/
void getRelativeNames(int numOfRel, char otherName[][10])
{
   cout << endl;
   for (int x = 0; x < numOfRel; x++)
   {
      cout << "Please enter the name of relative #" << x + 1 << ": ";
      cin >> otherName[x];
   }
}

/***********************************************************************
 * Prompts user for DNA sequence associated with the passed 
 * in and displayed name.
 ***********************************************************************/
void getDNASequence(int numOfRel, char otherName[][10], char otherDNA[][10])
{
   cout << endl;
   for (int x = 0; x < numOfRel; x++)
   {
      cout << "Please enter the DNA sequence for " << otherName[x] << ": ";
      cin >> otherDNA[x];
   }
}

/***********************************************************************
 * Displays who's DNA is being checked against yourDNA, and compares
 * each corresponding element in both arrays for equality. If it is equal,
 * add 10% to the percent match counter until all 10 values have been
 * compared.
 ***********************************************************************/
void percentMatch(int numOfRel, char yourDNA[10], 
                  char otherName[][10], char otherDNA[][10])
{
   cout << endl;
   int percentMatch = 0;
   for (int x = 0; x < numOfRel; x++)
   {
      for (int y = 0; y < 10; y++)
      {
         if (yourDNA[y] == otherDNA[x][y])
         {
            percentMatch += 10;
         }
      }
      cout << "Percent match for " << otherName[x] << ": "
           << percentMatch << '%' << endl;
      percentMatch = 0;
   }
}

/***********************************************************************
 * Main declares 3 arrays of char and one int, and uses external functions
 * to populate the arrays with proper data.
 ***********************************************************************/
int main()
{
   char yourDNA[10];
   getYourDNA(yourDNA);
   int numberOfRelatives = getNumberOfRelatives();
   char otherName[numberOfRelatives][10];
   getRelativeNames(numberOfRelatives, otherName);
   char otherDNA[numberOfRelatives][10];
   getDNASequence(numberOfRelatives, otherName, otherDNA);
   percentMatch(numberOfRelatives, yourDNA, otherName, otherDNA);
   return 0;
}
