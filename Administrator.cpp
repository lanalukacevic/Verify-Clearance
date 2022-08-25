#include <iostream>
#include "Administrator.h"
#include "Security.h"
using std::string;

// Returns true if a given username and password have administrator clearance.
bool Administrator::login(string username, string password)
{
    if (Security::validate(username, password) == 2)
    {
        return true;
    }
    return false;
}