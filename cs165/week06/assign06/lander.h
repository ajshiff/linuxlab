#pragma once
// #ifndef "point.h"
#include "point.h"
// #ifndef "velocity.h"
#include "velocity.h"
// #endif

using namespace std;
class Lander
{
private:
   Point point;
public:
   Lander();
   Point getPoint() const;
   Velocity getVelocity() const;
   bool isAlive();
   bool isLanded();
   int getFuel();
   bool canThrust();
   void setLanded(bool);
   void setAlive(bool);
   void setFuel(int);
   void applyGravity(float);
   void applyThrustLeft();
   void applyThrustRight();
   void applyThrustBottom();
   void advance();
   void draw();
};

