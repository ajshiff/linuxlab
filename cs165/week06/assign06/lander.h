#include "point.h"
#include "velocity.h"

using namespace std;

class Lander {
private:

public:
   Lander();
   Point getPoint();
   Velocity getVelocity();
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
}