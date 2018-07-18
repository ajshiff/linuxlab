#pragma once
#include "point.h"
#include "velocity.h"

using namespace std;

class FlyingObject
{
private:
   Point point;
   Velocity velocity;
   bool object
public:
   FlyingObject();
   Point getPoint();
   Velocity getVelocity();
   bool isAlive();
   void setPoint(Point);
   void setVelocity(Velocity);
   void kill();
   void advance();
   void draw();
}