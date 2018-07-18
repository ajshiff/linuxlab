#include "lander.h"
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"
#include "ground.h"

using namespace std;

int Lander :: lives;

/*************************************************************************
* Set default values to lander private variabls
**************************************************************************/
Lander :: Lander() {
   lives = 3;
   shipAlive = true;
   shipLanded = false;
   point = Point(100,100);
   velocity = Velocity(0,0);
}

/*************************************************************************
* returns the moon lander's current position
**************************************************************************/
Point Lander :: getPoint() const {
   return point;
}

/*************************************************************************
* returns the moon lander's current velocity.
**************************************************************************/
Velocity Lander :: getVelocity() const {
   return velocity;
}

/*************************************************************************
* Determine if the Lander is still alive by relying on the shipAlive variable.
* If the ship is not alive, check to see if they have any lives left. If they
* do, set the ship to alive, set to a new position, set fuel to 500, and give
* them another chance. Decrement static lives variable.
**************************************************************************/
bool Lander :: isAlive() {
   if (shipAlive == false && lives > 0)
   {
      shipAlive = true;
      lives--;
      fuel = 500;
      point.setX(200);
      point.setY(100);
      velocity.setDx(-1);
      velocity.setDy(0);
   }
   return shipAlive;
}

/*************************************************************************
* Return true of the shipLanded is true.
**************************************************************************/
bool Lander :: isLanded() {
   return shipLanded;
}

/*************************************************************************
* Return the amount of fuel that the lander has remaining.
**************************************************************************/
int Lander :: getFuel() {
   return fuel;
}

/*************************************************************************
* If the Lander has fuel, is not landed, and is alive, the ship can thrust.
**************************************************************************/
bool Lander :: canThrust() {
   if (fuel > 0 && isLanded() == false && isAlive()) 
   {
      return true;
   } 
   else if (fuel < 0)
   {
      fuel = 0;
      return false;
   } 
   else 
   {
      return false;
   }
}

/*************************************************************************
* Set the ship to a landed state... or not. Either way is fine.
**************************************************************************/
void Lander :: setLanded(bool didLand) {
   shipLanded = didLand;
}

/*************************************************************************
* Set the status of the ship, alive or not.
**************************************************************************/
void Lander :: setAlive(bool setAlive) {
   shipAlive = setAlive;
}

/*************************************************************************
* set the amount of fuel the ship has.
**************************************************************************/
void Lander :: setFuel(int setFuel) {
   fuel = setFuel;
}

/*************************************************************************
* Gravity has a constant downward (negative) pull of 0.1 pixels per frame.
* This pull is addative, so the longer it is left without resistance, the
* faster the ship will accelerative downward.
**************************************************************************/
void Lander :: applyGravity(float gravity) {
   float gravityPower = -1 * gravity; // Negative will make gravity pull ship down.
   velocity.setDy(velocity.getDy() + gravityPower);
}

/*************************************************************************
* adds momentum that pushes the ship to the right side of the screen.
**************************************************************************/
void Lander :: applyThrustLeft() {
   if (canThrust())
   {
      float leftThrustPower = 0.1;
      fuel -= 1;
      velocity.setDx(velocity.getDx() + leftThrustPower);
   }
}

/*************************************************************************
* adds momentum that pushes the ship to the left side of the screen.
**************************************************************************/
void Lander :: applyThrustRight() {
   if (canThrust()) 
   { 
      float rightThrustPower = -0.1; // Negative will move ship left
      fuel -= 1;
      velocity.setDx(velocity.getDx() + rightThrustPower);
   }
}

/*************************************************************************
* Adds momentum that pushes the ship, upwards- ie. away from the ground.
*************************************************************************/
void Lander :: applyThrustBottom() {
   if (canThrust())
   {
      float bottomThrustPower = 0.3;
      fuel -= 3;
      velocity.setDy(velocity.getDy() + bottomThrustPower);
   } 
}

/*************************************************************************
* This moves the ship every frame dx and dy distance.
**************************************************************************/
void Lander :: advance() {
   point.addX(velocity.getDx());
   point.addY(velocity.getDy());
}

/*************************************************************************
* This draws the moonlander at its current position.
**************************************************************************/
void Lander :: draw() {
   drawLander(point);
}

