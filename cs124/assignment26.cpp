/***********************************************************************
* Program:
*    Assignment 26, File Reader
*    Brother Cook, CS124
* Author:
*    Aaron Shiffler
* Summary: 
*      This program reads a file specified by the user, and displays the
*      average of the values in the given files. The values are only displayed
*      if there are 10 values to read from. It will return an error if there are
*      more or less, or if the file does not exist.
*    Estimated:  0.75 hrs   
*    Actual:     3.0 hrs
*      The most difficult part of this assignment was figuring out how to
*      tell the display function whether it should run based on the results
*      from the readFileReturnAverage() function. I ended up using a bool
*      pass-by-reference.
************************************************************************/

#include <iostream> //cout, cin, fixed 
#include <iomanip> //setprecision(), setw(),
#include <fstream>
using namespace std;

/**********************************************************************
 * overwrites the passed in array with user input.
 ***********************************************************************/
void getFileName(char fileName[])
{
   cout << "Please enter the filename: ";
   cin >> fileName;
}

/**********************************************************************
 * reads the passed in array, calls the file, adds the values in the file
 * together, and returns the average of the files.
 ***********************************************************************/
float readFileReturnAverage(char fileName[], bool &shouldIDisplayTheAverage)
{
   float value;
   float average = 0;
   int arrayLength = 10;
   int counter = 0;
   ifstream storeFile(fileName); 
   while(storeFile >> value)
   {
      average = average + value;
      counter++;
   }
   if (counter != arrayLength)
   {
      cout << "Error reading file " << '"' << fileName << '"' << endl;
      storeFile.close();
      shouldIDisplayTheAverage = false;
      return 0;
   }
   else
   { 
      average = average / arrayLength;
      storeFile.close();
      shouldIDisplayTheAverage = true;
      return average;
   }
}

/**********************************************************************
 * round() determines whether a given float should or should not be rounded up
 ***********************************************************************/
int round (float floatValue)
{
   int intValue = floatValue;
   int resultValue;
   cout << floatValue;
   if (floatValue - intValue < 0.5)
      resultValue = intValue;
   else
      resultValue = intValue + 1;
   return resultValue;
}

/**********************************************************************
 * display() prints the given value
 ***********************************************************************/
void display(float average)
{
      cout.precision(0);
      cout << fixed << "Average Grade: " << average << '%' << endl;
}

/**********************************************************************
 * main() declares an array, calls a function to add value to the array,
 * then passes that array value to readFileReturnAverage() and passes
 * readFileReturnAverage() value to display()
 ***********************************************************************/
int main()
{
   bool shouldIDisplayTheAverage;
   char fileName[100];
   getFileName(fileName);
   float average = readFileReturnAverage(fileName, shouldIDisplayTheAverage);
   if (shouldIDisplayTheAverage == true)
   {
      display(average);
   }
   return 0;
}
