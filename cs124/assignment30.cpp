/***********************************************************************
* Program:
*    Assignment 30, Average Grades
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    This program prompts the user for 10 integers, stores them in an array,
*    then processes them to find the average then displays the average.
*
*    Estimated:  0.5 hrs   
*    Actual:     0.5 hrs
*      I am very comfortable with filling arrays between functions now.
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
 * the array and returns the averaged value of the ten items.
 ***********************************************************************/
int averageGrades(int grades[])
{
   int average = 0;
   for (int x = 0; x < 10; x++)
   {
      average = average + grades[x];
   }
   average = average / 10;
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
   cout << "Average Grade: " << average << "%" << endl;
   return 0;
}
