#ifndef USER_H
#define USER_H

#include <iostream>
using std::string;
#include "Security.h"
class User
{
public:
    static bool login(string username, string password);
};

#endif