/****************
 * smartphone.h
 ****************/
#pragma once
#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include <string>

// TODO: Put your SmartPhone definition here
class SnartPhone : Phone
{
private:
    string email;
public:
    void prompt();
    void display();
}
#endif
