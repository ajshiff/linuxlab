/***********************************************************************
* Program:
*    Checkpoint 00, Assignment
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
************************************************************************/

#include <iostream>
using namespace std;


class ForkLift{
public: void raiseLift(int &fuel, bool &isRaised)
{
   int fuelRequired = 5;
   if(isRaised){
      cout << "The fork lift is already raised." << endl;
      isRaised = isRaised;
   }
   else if (fuel > fuelRequired)
   {
      cout << "Raising the Lift." << endl;
      fuel = fuel - fuelRequired;
      isRaised = true;
      
   }
   else 
   {
      cout << "Not enough fuel to raise the lift." << endl;
      isRaised = false;
   }
};
public: void lowerLift(int &fuel, bool &isRaised)
{
   int fuelRequired = 5;
   if(!isRaised){
      cout << "The fork lift is already lowered." << endl;
      isRaised = isRaised;
   }
   else if (fuel > fuelRequired)
   {
      cout << "Lowering the Lift." << endl;
      fuel = fuel - fuelRequired;
      isRaised = false;
      
   }
   else 
   {
      cout << "Not enough fuel to lower the lift." << endl;
      isRaised = true;
   }
};
public: void displayStatus(int fuel, bool isRaised)
{
   string forkStatus;
   if (isRaised == true)
   {
      forkStatus = "Raised";
   }
   else
   {
      forkStatus = "Lowered";
   }
   cout << "Fuel Remaining: " << fuel << endl;
   cout << "Fork lift Status: " << forkStatus << endl;
};
public: int fuel;
public: bool isRaised;
};

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   string userCommand;
   ForkLift firstLift;
   firstLift.fuel = 22;
   firstLift.isRaised = false;
   while (true)
   {  
      cout << endl << "Would you like to raise [r] or lower [l] the fork lift?: " ;
      cin >> userCommand;
      if (userCommand == "r")
      {
         firstLift.raiseLift(firstLift.fuel, firstLift.isRaised);
         firstLift.displayStatus(firstLift.fuel, firstLift.isRaised);
      }
      else if(userCommand == "l")
      {
         firstLift.lowerLift(firstLift.fuel, firstLift.isRaised);
         firstLift.displayStatus(firstLift.fuel, firstLift.isRaised);
      }
      else 
      {
         cout << endl << "You entered an invalid command: " << userCommand << "." << endl << "Enter a different command." << endl;
      }
   }
   return 0;
}
