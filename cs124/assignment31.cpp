/***********************************************************************
* Program:
*    Assignment 31, Average Grades
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    This program prompts the user for 10 integers, stores them in an array,
*    then processes them to find the average then displays the average. This
*    version includes the ability to not include not-completed assignments into
*    the average.
*
*    Estimated:  0.25 hrs   
*    Actual:     0.2 hrs
*      Figuring out how to print the ---% at the end ended up being pretty
*      simple but still took the most thought in this assignement.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * getGrades() prompts the user for 10 grades and saves that data to the
 * array given to it from main.
 ***********************************************************************/
void getGrades(int grades[])
{
   for (int x = 0; x < 10; x++)
   {
      cout << "Grade " << x+1 << ": ";
      cin >> grades[x];
   }
}

/**********************************************************************
 * averageGrades takes a given array and evaluates the first ten items in
 * the array and returns the averaged value of the ten items. If the value
 * input was -1, that value is considered not complete and is not included
 * in the average calculation.
 ***********************************************************************/
int averageGrades(int grades[])
{
   int average = 0;
   int averageCounter = 0;
   for (int x = 0; x < 10; x++)
   {
      if(grades[x] != -1)
      {
         average = average + grades[x];
         averageCounter++;
      }
   }
   if (averageCounter != 0)
   {
      average = average / averageCounter;
   }
   else
   {
      average = -1;
   }
   return average;
}

/**********************************************************************
 * main() declares an array to be filled by getGrades() and passes it.
 * Then the array is then passed to averageGrades() to be evaluated and the
 * returned expression is then output to the screen.
 ***********************************************************************/
int main()
{
   int grades[10];
   getGrades(grades);
   int average = averageGrades(grades);
   if (average != -1)
   {
      cout << "Average Grade: " << average << "%" << endl;
   }
   else
   {
      cout << "Average Grade: ---%" << endl;
   }
   return 0;
}
