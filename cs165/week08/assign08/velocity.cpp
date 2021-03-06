#include "velocity.h"

using namespace std;

/*************************************************************************
* 
**************************************************************************/
Velocity :: Velocity() {
   dx = 0;
   dy = 0;
}

/*************************************************************************
* 
**************************************************************************/
Velocity :: Velocity(float setDxo, float setDyo) {
   dx = setDxo;
   dy = setDyo;
}

/*************************************************************************
* 
**************************************************************************/
float Velocity :: getDx() {
   return dx;
}

/*************************************************************************
* 
**************************************************************************/
float Velocity :: getDy() {
   return dy;
}

/*************************************************************************
* 
**************************************************************************/
void Velocity :: setDx(float setDx) {
   dx = setDx;
}

/*************************************************************************
* 
**************************************************************************/
void Velocity :: setDy(float setDy) {
   dy = setDy;
}
