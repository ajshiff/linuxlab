/***********************************************************************
* Program:
*    Assignment 02, Digital Forensics
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary:
*    
*    Estimated:  2.0 hrs
*    Actual:     4.0 hrs
*      Relearning fstream took a while on this assignment, but I feel a lot
*      more comfortable now. Also, The AccessRecord struct wasn't accepting
*      some forms of data, so I had to adopt strings and convert some data 
*      to a long before it could be stored.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct AccessRecord
{
    string username;
    string filename;
    long timestamp;
};
/**********************************************************************
 * Prompt the user for a time in terms of miliseconds
 ***********************************************************************/
long promptForTime (string insert)
{
    long time = 0;
    cout << "Enter the " << insert << " time: ";
    cin >> time; 
    return time;
}


/**********************************************************************
 * prompt the user for a filepath that can be used to retrive an external file
 ***********************************************************************/
void promptForFileName (char filename[])
{
    cout << "Enter the access record file: ";
    cin >> filename;
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
 * First this function opens a file, then begins to read it.
 * Every Element is stored in the AccessRecord Array in it's correct lacation
 * by cycling through the information in the correct order. 
 * RETURNS number of records matched and stored.
 ***********************************************************************/
int readAndFilterAccessFile (char filename[], AccessRecord recordMatches[], long startTime, long endTime)
{
    //char fileContents[100];
    string fileContents;
    ifstream fs;
    fs.open(filename);
    while (fs.fail())
    {
       cout << "Invalid File." << endl;
       promptForFileName(filename);
       fs.open(filename);
    }
    int recordCounter;
    for (int x = 0; !fs.eof(); x++)
    {   
        fs >> recordMatches[x].filename;
        fs >> recordMatches[x].username;
        fs >> fileContents;
        stringstream convert (fileContents);
        convert >> recordMatches[x].timestamp;
        if(startTime <= recordMatches[x].timestamp && recordMatches[x].timestamp <= endTime)
        {
            
        }
        else
        {
            x--;
        }
        recordCounter = x;
    }    
    fs.close();
    return recordCounter;
}

/**********************************************************************
 * Displays pertainant information neatly
 ***********************************************************************/
void display (AccessRecord recordMatches[], int numberOfRecords)
{
    cout << "The following records match your criteria:" << endl << endl;
    cout << setw(15) << "Timestamp" << " ";
    cout << setw(19) << "File" <<  " ";
    cout << setw(19) << "User" << endl;
    cout << "--------------- ------------------- -------------------" << endl;
    for(int x = 0; x <= numberOfRecords ; x++)
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
    char filename[255];
    AccessRecord recordMatches[500];
    long startTime = 0;
    long endTime = 0;
    promptForFileName(filename);
    blankLine();
    startTime = promptForTime("start");
    endTime = promptForTime("end");
    blankLine();
    int recordCount = 
    readAndFilterAccessFile(filename, recordMatches, startTime, endTime);
    display(recordMatches, recordCount);    
    return 0;
}
