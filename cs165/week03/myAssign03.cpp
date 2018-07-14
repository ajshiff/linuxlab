/***********************************************************************
* Program:
*    Assignment 03, Digital Forensics
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary:
*    
*    Estimated:  2.5 hrs
*    Actual:     3.5 hrs
*
*    By Approaching the development of this assignment with an outline of
*    how I wanted the program to work, I was able to avoid a lot of what
*    may have otherwise been difficulties. Deciding where to put the try,
*    throw, and catch and deciding what to do during those circumstances 
*    provided the most uncertainty, but with the bigger picture already in
*    place, the answer to those questions came relatively quickly.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct AccessRecord
{
   string filename;
   string username;
   long timestamp;
};

/**********************************************************************
 * Prompt the user for a time in terms of milliseconds
 ***********************************************************************/
long promptForTime (string insert)
{
   long time = 0;
   cout << "Enter the " << insert << " time: ";
   cin >> time; 
   return time;
}


/**********************************************************************
 * prompt the user for a file-path that can be used to 
 * retrieve an external file
 ***********************************************************************/
void promptForFileName (char filename[])
{
   ifstream fs;
   do
   {
      cout << "Enter the access record file: "; 
      cin >> filename;
      fs.open(filename);
      if (fs.fail()) 
      {
         cout << "Invalid File." << endl;
      }
   } while (fs.fail());
   fs.close();
   return;
}

/**********************************************************************
 * short-hand function to skip a line in console output.
 ***********************************************************************/
void blankLine ()
{
   cout << endl;
}


/**********************************************************************
 * parseFile() will read the file one line at a time, and store the 
 * contents of the line as a string, ignoring any errors, and populate
 * an array with each line in the file given.
 **********************************************************************/
int parseFile(char filename[], string fileLine[])
{
   ifstream fs;
   fs.open(filename);
   int counter = 0;
   for (; !fs.eof(); counter++)
   {
      getline(fs, fileLine[counter]);
   }
   return counter - 1;
}

/**********************************************************************
 * parseLine() will receive the file in one-line segments, and break up
 * each line into their 3 parts using white space as an identifier.
 * An error will be thrown, and the whole line will be printed in the 
 * console, but not stored in the AccessRecord Struct Array. 
 **********************************************************************/
int parseLine(int fileLength, string fileLine[], AccessRecord recordMatches[])
{
   stringstream ss;
   int modifier = 0;
   for (int x = 0; x < fileLength; x++)
   {
      ss.str(fileLine[x]);
      if (ss.fail()) cout << "ERRoR: STRING-STREAM READ-IN FAILED!!." << endl;
      try 
      {
         ss >> recordMatches[x - modifier].filename;
         ss >> recordMatches[x - modifier].username;
         ss >> recordMatches[x - modifier].timestamp;
         if   (recordMatches[x - modifier].timestamp < 1000000000 
            || recordMatches[x - modifier].timestamp > 10000000000)
         {
            throw(fileLine[x]);
         }
         ss.clear();
      }
      catch (string message)
      {
         cout << "Error parsing line: " << message << endl;
         modifier++;
         ss.clear();
      }
   }
   return fileLength - modifier;
}


/**********************************************************************
 * filterByTimeStamp() takes an AccessRecord Array, reads the timestamp
 * values of each element, and removes the ones that don't fall within
 * the time interval. It will record the ones that do fall within the
 * interval, and overwrite the existing array with the filtered list.
 **********************************************************************/
int filterByTimestamp(long start, long end, int fiLength, AccessRecord rms[])
{
   int counter = 0;
   for (int x = 0; x < fiLength; x++)
   {
      if (start <= rms[x].timestamp && rms[x].timestamp <= end)
      {
         rms[counter] = rms[x];
         counter++;
      }
   }
   return counter;
}


/**********************************************************************
 * Displays pertinent information neatly
 **********************************************************************/
void display (AccessRecord recordMatches[], int numberOfRecords)
{
   cout << "The following records match your criteria:" << endl << endl;
   cout << setw(15) << "Timestamp" << " ";
   cout << setw(19) << "File" <<  " ";
   cout << setw(19) << "User" << endl;
   cout << "--------------- ------------------- -------------------" << endl;
   for (int x = 0; x < numberOfRecords ; x++)
   {
      cout << setw(15) << recordMatches[x].timestamp << " ";
      cout << setw(19) << recordMatches[x].filename << " ";
      cout << setw(19) << recordMatches[x].username << endl;
   }
   cout << "End of records" << endl;
}

/**********************************************************************
 * main() Handles data and calls functions.
 ***********************************************************************/
int main()
{
   AccessRecord recordMatches[500];
   string fileLine[500];
   char filename[512];
   long startTime = 0;
   long endTime = 0;
   int fileLength = 0;
   promptForFileName(filename);
   fileLength = parseFile(filename, fileLine);
   fileLength = parseLine(fileLength, fileLine, recordMatches);
   blankLine();
   startTime = promptForTime("start");
   endTime = promptForTime("end");
   fileLength = filterByTimestamp(startTime, endTime, 
                                  fileLength, recordMatches);
   blankLine(); 
   display(recordMatches, fileLength);    
   return 0;
}
