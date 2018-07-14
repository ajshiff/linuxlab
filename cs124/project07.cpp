/***********************************************************************
* Program:
*    Project 07, Calendar Project
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*    This program takes two number inputs from the user, and uses them to 
*    determine what a calendar from year 1753 or beyond will look like. 
*
*    Estimated:  3.0 hrs   
*    Actual:     7.0 hrs
*      The most difficult part was the display function. Finding all the 
*      number values was pretty simple, but when it came to testBed, it was
*      very picky and I spent a little over an hour getting it exactly how
*      it wanted it.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/**********************************************************************
 * prompts user for a target month, returns that value. It will keep asking
 * until the number they submit is between or equal to 1-12
 ***********************************************************************/
int getTargetMonth()
{
   int month;
   cout << "Enter a month number: "; 
   cin >> month;
   while (month < 1 || 12 < month)
   {
      cout << "Month must be between 1 and 12." << endl;
      cout << "Enter a month number: "; 
      cin >> month;
   }
   return month;
}

/**********************************************************************
 * prompts user for target year, and returns that value. It will keep asking
 * until the number they submit is above or equal to 1753.
 ***********************************************************************/
int getTargetYear()
{
   int year; 
   cout << "Enter year: ";
   cin >> year;
   while (year < 1753)
   {   
      cout << "Year must be 1753 or later." << endl;
      cout << "Enter year: ";
      cin >> year;
   }
   return year;
}

/**********************************************************************
 * determines whether a given year is a leap year.
 ***********************************************************************/
bool isLeapYear(int year)
{
   if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))
      return false;
   else
      return true;
}

/**********************************************************************
 * returns a numeric value that represents a day of the week, from 0-6
 * 0 being monday, 6 being sunday.
 ***********************************************************************/
int daysInMonthFinder(int currentMonth, int currentYear)
{
   int daysInTargetMonth = 0;
   if (currentMonth == 1 || currentMonth == 3 || currentMonth == 5 
       || currentMonth == 7 || currentMonth == 8 || currentMonth == 10
       || currentMonth == 12)
   {  
      daysInTargetMonth = 31;
   }
   else if ( currentMonth == 4 || currentMonth == 6 
             || currentMonth == 9 || currentMonth == 11)
   {
      daysInTargetMonth = 30;
   }
   else if (currentMonth == 2)
   {
      if (isLeapYear(currentYear))
         daysInTargetMonth = 29;
      else
         daysInTargetMonth = 28;
   }
   return daysInTargetMonth;
}

/**********************************************************************
 * Counts days till our target month and year, returns that number.
 ***********************************************************************/
int daysTillTargetDate(int targetMonth, int targetYear)
{
   int daysCounter = 0;
   int currentYear = 1753;
   int currentMonth = 1;
   //Counts the days till the target year, 
   //but not including the target year.
   while (currentYear < targetYear)
   {
      if (isLeapYear(currentYear))
      {
         daysCounter = daysCounter + 366;
      }
      else
         daysCounter = daysCounter + 365;
      currentYear++;
   }
   //counts the days till target month within the target year, 
   //and adds to day counter
   while (currentMonth < targetMonth)
   {  
      daysCounter += daysInMonthFinder(currentMonth, currentYear);
      currentMonth++
   }
   return daysCounter;
}

/**********************************************************************
 * returns a numeric value that represents a day of the week, from 0-6
 * 0 being monday, 6 being sunday.
 ***********************************************************************/
int firstDayOfMonthCalculator(int daysTillDate)
{
   int startingDay = daysTillDate % 7;
   return startingDay;
}

/**********************************************************************
* getMonthName() takes a monthNumber as an argument, and updates the
* monthName array from main with corresponding month name.
***********************************************************************/
string getMonthName(int monthNumber, string monthName)
{
   switch (monthNumber)
   {
      case 1:
         monthName = "January";
         break;
      case 2: 
         monthName = "February";
         break;
      case 3:
         monthName = "March";
         break;
      case 4:
         monthName = "April";
         break;
      case 5:
         monthName = "May";
         break;
      case 6:
         monthName = "June";
         break;
      case 7:
         monthName = "July";
         break;
      case 8:
         monthName = "August";
         break;
      case 9:
         monthName = "September";
         break;
      case 10:
         monthName = "October";
         break;
      case 11: 
         monthName = "November";
         break;
      case 12:
         monthName = "December";
         break;
   }
   return monthName;
}

/**********************************************************************
 * in charge of calculating how to display a calendar table based on given
 * information.
 ***********************************************************************/
void display(int firstDayOfMonth, int targetMonth, 
             int targetYear, string monthName)
{
   int newLineCounter = firstDayOfMonth + 1;
   int daysInMonth = daysInMonthFinder (targetMonth, targetYear);
   cout << '\n';
   cout << monthName << ", " << targetYear << endl;
   cout << "  Su  Mo  Tu  We  Th  Fr  Sa" << endl;
   //cout spaces equal to the number of days we are into the week when the
   //month starts
   for (int x = 0; x <= firstDayOfMonth && firstDayOfMonth != 6; x++)
   {
      cout << setw(4) << "";
   }
   if (newLineCounter == 7)
      newLineCounter = 0;
   //prints out days of the month, and determines when a new line is needed.
   for (int x = 1; x <= daysInMonth; x++)
   {
      cout << setw (4) << x;
      newLineCounter++;
      if (newLineCounter == 7 || x == daysInMonth)
      {
         cout << endl;
         newLineCounter = 0;
      }
   }
   return;
}

/**********************************************************************
 * Main stores the information given by targetMonth and targetYear
 * and passes them to other functions for find how many days until a certain
 * month, and then finds out what day of the week the firstDayOfMonth is on
 * ie. Mon, Tues, Wed... and then sends that info to the display to print it.
 ***********************************************************************/
int main()
{
   int targetMonth = getTargetMonth();
   int targetYear = getTargetYear();
   int daysTillDate = daysTillTargetDate(targetMonth, targetYear);
   int firstDayOfMonth = firstDayOfMonthCalculator(daysTillDate);
   string monthName = getMonthName(targetMonth, monthName);
   display(firstDayOfMonth, targetMonth, targetYear, monthName);
   return 0;
}
