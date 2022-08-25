#include <iostream>
#include "User.h"
#include "Security.h"
using std::string;

// Returns true if a given username and password have either user or administrator clearance.
bool User::login(string username, string password)
{
    if (Security::validate(username, password) == 2 || Security::validate(username, password) == 1)
    {
        return true;
    }
    return false;
}