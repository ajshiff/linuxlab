#include "velocity.h"

using namespace std;

/*************************************************************************
* Initializes Velocity dx_o and dy_o to 0 by default..
**************************************************************************/
Velocity :: Velocity() {
   dx = 0;
   dy = 0;
}

/*************************************************************************
* But if the programmer passes in initial float values, use those values
instead.
**************************************************************************/
Velocity :: Velocity(float setDxo, float setDyo) {
   dx = setDxo;
   dy = setDyo;
}

/*************************************************************************
* Returns current dx velocity.
**************************************************************************/
float Velocity :: getDx() {
   return dx;
}

/*************************************************************************
* returns current dy velocity.
**************************************************************************/
float Velocity :: getDy() {
   return dy;
}

/*************************************************************************
* sets a new dx velocity.
**************************************************************************/
void Velocity :: setDx(float setDx) {
   dx = setDx;
}

/*************************************************************************
* sets a new dx velocity.
**************************************************************************/
void Velocity :: setDy(float setDy) {
   dy = setDy;
}
