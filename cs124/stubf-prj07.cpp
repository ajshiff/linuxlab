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
   return month;
}

/**********************************************************************
 * prompts user for target year, and returns that value. It will keep asking
 * until the number they submit is above or equal to 1753.
 ***********************************************************************/
int getTargetYear()
{
   int year; 
   return year;
}

/**********************************************************************
 * determines whether a given year is a leap year.
 ***********************************************************************/
bool isLeapYear(int year)
{
      return true;
}

/**********************************************************************
 * returns a numeric value that represents a day of the week, from 0-6
 * 0 being monday, 6 being sunday.
 ***********************************************************************/
int daysInMonthFinder(int currentMonth, int currentYear)
{
   int daysInTargetMonth = 0;
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
   daysCounter += daysInMonthFinder(currentMonth, currentYear);
   return daysCounter;
}

/**********************************************************************
 * returns a numeric value that represents a day of the week, from 0-6
 * 0 being monday, 6 being sunday.
 ***********************************************************************/
int getWeekOffset(int daysTillDate)
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
   string monthName;
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
