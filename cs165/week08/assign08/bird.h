#pragma once
#include "point.h"
#include "velocity.h"
#include "flyingObject.h"

using namespace std;

class Bird
{
private:
   int pointValue; // on Kill
public:
   Bird(Point);
   void hit();
};