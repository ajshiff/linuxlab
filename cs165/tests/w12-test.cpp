/***********************************************************************
* Program:
*    Checkpoint 00, Assignment
*    Brother Cook, CS165
* Author:
*    Aaron Shiffler
************************************************************************/

#include <iostream>
using namespace std;

class Airplane
{
   private:
   int currentAltitude;
   int cruiseAltitude;
   public:
 /**********************************************************************
 * Set non-default constructor, set initial values.
 ***********************************************************************/
   Airplane(int cruizAltitude)
   {
      cruiseAltitude = cruizAltitude;
      currentAltitude = 0;
   }
   
 /**********************************************************************
 * notAtCruiseAltitude() increases the plane's current altitude by 100ft
 * until the plane's altitude is greater than or equal to the specified
 * crusing altitude. It returns true if it is not at cruising altitude,
 * and returns false once it's at or above cruzing altitude.
 ***********************************************************************/
   bool notAtCruiseAltitude()
   {
      if (currentAltitude < cruiseAltitude)
      {
         cout << "Plane now at " << currentAltitude << "ft." << endl;
         currentAltitude += 100;
         return true;
      } else {
         cout << "Plane now at cruising altitude: " << cruiseAltitude << "ft." << endl;
         return false;
      }
   }
};

/**********************************************************************
 * main() delcares an airplane object, then elevates its altitude
 * until it reaches the specified cruising altitude, defined in the 
 * non-default parameter.
 **********************************************************************/
int main()
{
   Airplane airplane(1000);
   while(airplane.notAtCruiseAltitude());
   return 0;
}
