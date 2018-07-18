/***************
 * phone.h
 ***************/
#pragma once
#ifndef PHONE_H
#define PHONE_H
#include <string>
using namespace std;

// TODO: Put your phone class definition here...
class Phone
{
private:
   int areaCode;
   int prefix;
   int suffix;
public:
   Phone();
   void promptNumber();
   void display();
};

#endif
