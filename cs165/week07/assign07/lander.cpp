#include "lander.h"
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"
#include "ground.h"

using namespace std;

/*************************************************************************
* 
**************************************************************************/
Lander :: Lander() {
   shipAlive = true;
   shipLanded = false;
   point = Point(100,100);
   velocity = Velocity(0,0);
}

/*************************************************************************
* 
**************************************************************************/
Point Lander :: getPoint() const {
   return point;
}

/*************************************************************************
* 
**************************************************************************/
Velocity Lander :: getVelocity() const {
   return velocity;
}

/*************************************************************************
* 
**************************************************************************/
bool Lander :: isAlive() {
   return shipAlive;
}

/*************************************************************************
* 
**************************************************************************/
bool Lander :: isLanded() {
   return shipLanded;
}

/*************************************************************************
* 
**************************************************************************/
int Lander :: getFuel() {
   return fuel;
}

/*************************************************************************
* 
**************************************************************************/
bool Lander :: canThrust() {
   if (fuel > 0 && isLanded() == false && isAlive() && isLanded() == false) {
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
* 
**************************************************************************/
void Lander :: setLanded(bool didLand) {
   shipLanded = didLand;
}

/*************************************************************************
* 
**************************************************************************/
void Lander :: setAlive(bool setAlive) {
   shipAlive = setAlive;
}

/*************************************************************************
* 
**************************************************************************/
void Lander :: setFuel(int setFuel) {
   fuel = setFuel;
}

/*************************************************************************
* 
**************************************************************************/
void Lander :: applyGravity(float gravity) {
   // float gravityPower = -0.1; // Negative will make gravity pull ship down.
   float gravityPower = -1 * gravity; // Negative will make gravity pull ship down.
   velocity.setDy(velocity.getDy() + gravityPower);
}

/*************************************************************************
* 
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
* 
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
* 
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
* 
**************************************************************************/
void Lander :: advance() {
   point.addX(velocity.getDx());
   point.addY(velocity.getDy());
}

/*************************************************************************
* 
**************************************************************************/
void Lander :: draw() {
   drawLander(point);
}

