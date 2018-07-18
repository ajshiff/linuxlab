#pragma once
using namespace std;

class Velocity
{
private:
   float dx;
   float dy;
public:
   Velocity();
   Velocity(float, float);
   float getDx();
   float getDy();
   void setDx(float);
   void setDy(float);
};