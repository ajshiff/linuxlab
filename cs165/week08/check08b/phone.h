/***************
 * phone.h
 ***************/
#pragma once
#ifndef PHONE_H
#define PHONE_H
#include <string>

// TODO: Put your phone class definition here...
class Phone
{
private:
    int areaCode;
    int prefix;
    int suffix;
public:
    void promptNumber();
    void display();
}

#endif
