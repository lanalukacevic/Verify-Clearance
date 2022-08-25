#ifndef SECURITY_H
#define SECURITY_H

#include <iostream>
using std::string;
class Security
{
public:
    static int validate(string username, string password);
};

#endif