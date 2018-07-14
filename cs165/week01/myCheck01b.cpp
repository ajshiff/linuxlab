/***********************************************************************
* Program:
*    Checkpoint 01b, C++ Basics - Arrays
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream> 
using namespace std;

/**********************************************************************
 * Function getSize()
 * Purpose: Learn from the user how many items will be recorded and evaluated
 ***********************************************************************/
int getSize()
{
   int size;
   cout << "Enter the size of the list: ";
   cin >> size;
   return size;
}

/**********************************************************************
 * Function: getList
 * Purpose: promt the user for a number of integers equal to the size arguement
 ***********************************************************************/
void getList(int size, int array[])
{
   for (int x = 0; x < size; x++)
   {
      cout << "Enter number for index " << x << ": ";
      cin >> array[x];
   }
}

/**********************************************************************
 * Function: displayMultiples
 * Purpose: Evaluate the elements in the passed array to determine which
 * elements are divisible by 3 and display only those elements.
 ***********************************************************************/
void displayMultiples(int size, int array[])
{
   cout << endl << "The following are divisible by 3:" << endl;
   for(int x = 0; x < size; x++)
   {
      if (array[x] % 3 == 0)
      {
         cout << array[x] << endl;
      }
   }
}

/**********************************************************************
 * Function: main
 * Purpose: Declare an array of numbers. Call getSize(), call getList(), 
 * call displayMultiples()
 ***********************************************************************/
int main()
{
   int array[20];
   int size = getSize();
   getList(size, array);
   displayMultiples(size, array);
   return 0;
}
