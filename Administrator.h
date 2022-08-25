#ifndef Administrator_h
#define Administrator_h

#include <iostream>
#include "Security.h"
using std::string;

class Administrator
{
public:
    static bool login(string username, string password);
};

#endif