/****************
 * smartphone.h
 ****************/
#pragma once
#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include <string>
#include "phone.h"
using namespace std;

// TODO: Put your SmartPhone definition here
class SmartPhone : Phone
{
private:
   string email;
public:
   void prompt();
   void display();
};
#endif
