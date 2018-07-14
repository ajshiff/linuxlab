/***********************************************************************
* Program:
*    Checkpoint 00, w3-test
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

bool shouldFurnaceTurnOn (int currentTemperature, int desiredTemperature)
{
   if(currentTemperature < desiredTemperature)
      return true;
   else 
      return false;
}

int main()
{ 
   int currentTemp;
   int desiredTemp;
   cout << "What is the current temperature?: ";
   cin >> currentTemp;
   cout << "What temperature do you want it to be?: ";
   cin >> desiredTemp;
   int temperatureDifference;
   while (shouldFurnaceTurnOn(currentTemp, desiredTemp))
   {
      currentTemp += 1;
      temperatureDifference += 1;
   }
   cout << "The current temperature is now " << currentTemp << " degrees." << endl 
        << "The room temperature has been raised " << temperatureDifference << " degrees." << endl;
   return 0;
}
