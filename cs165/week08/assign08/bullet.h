#pragma once
#include "point.h"
#include "velocity.h"
#include "flyingObject.h"

using namespace std;

class Bullet
{
private:

public:
   Bullet();
   void fire(Point, float);