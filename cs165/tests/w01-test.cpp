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
using namespace std;

int getTemperatures()
{
   int currentTemp = 0;
   cout << "What is the temperature outside?: ";
   cin >> currentTemp;
   return currentTemp;
}

int main()
{ 
   int currentTemp = 0;
   int numberOfValues = 0;
   int accumulationOfTemps = 0;
   do 
   {
      currentTemp = getTemperatures();
      if (currentTemp < 200)
      {
         accumulationOfTemps += currentTemp;
         numberOfValues++;
      }
   } while(currentTemp < 200); 
   if (numberOfValues == 0)
   {
      cout << "Error. You must enter at least one valid temperature." << endl << "Exiting Program." << endl;
      return 0;
   }
   float averageTemperature = accumulationOfTemps / numberOfValues;
   cout << "The average temperature outside is " << averageTemperature << "." << endl;
   return 0;
}
