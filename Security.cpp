#include <iostream>
using std::string;
#include "Security.h"
// The code below is not considered a secure practice.
// It returns 0 if the credentials are invalid, 1 if valid user, and 2 if valid administrator
int Security::validate(string username, string password)
{
    if ((username == "abbott") && (password == "monday"))
        return 1;
    if ((username == "costello") && (password == "tuesday"))
        return 2;
    return 0;
}