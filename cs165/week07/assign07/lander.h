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
   Velocity velocity;
   int fuel;
   bool shipAlive;
   bool shipLanded;
   // int lives;
public:
   static int lives;
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

