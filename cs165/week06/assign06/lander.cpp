#include "lander.h"
#include "velocity.h"
#include "point.h"

using namespace std;

/*************************************************************************
* 
**************************************************************************/
Lander :: Lander() {

}

/*************************************************************************
* 
**************************************************************************/
Point Lander :: getPoint() {
   return Point;
}

/*************************************************************************
* 
**************************************************************************/
Velocity Lander :: getVelocity() {
   return Velocity;
}

/*************************************************************************
* 
**************************************************************************/
bool Lander :: isAlive() {
   return true;
}

/*************************************************************************
* 
**************************************************************************/
bool Lander :: isLanded() {
   return true;
}

/*************************************************************************
* 
**************************************************************************/
int Lander :: getFuel() {
   return 0;
}

/*************************************************************************
* 
**************************************************************************/
bool Lander :: canThrust() {
   return true;
}

/*************************************************************************
* 
**************************************************************************/
void Lander :: setLanded(bool didLand) {

}

/*************************************************************************
* 
**************************************************************************/
void Lander :: setAlive(bool isAlive) {

}

/*************************************************************************
* 
**************************************************************************/
void Lander :: setFuel(int setFuel) {

}

/*************************************************************************
* 
**************************************************************************/
void Lander :: applyGravity(float gravity) {

}

/*************************************************************************
* 
**************************************************************************/
void Lander :: applyThrustLeft() {

}

/*************************************************************************
* 
**************************************************************************/
void Lander :: applyThrustRight() {

}

/*************************************************************************
* 
*************************************************************************/
void Lander :: applyThrustBottom() {

}

/*************************************************************************
* 
**************************************************************************/
void Lander :: advance() {

}

/*************************************************************************
* 
**************************************************************************/
void Lander :: draw() {

}
