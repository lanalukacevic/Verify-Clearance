#include <iostream>
using std::string;
#include "Administrator.h"
#include "User.h"
#include "Security.h"
using std::cout;

int main()
{
    // Testing administrator clearance
    std::cout << "Testing Administrator clearance for costello\n";
    string username = "costello";
    string password = "tuesday";
    // Administrator loging in with username and passoword
    if (Administrator::login(username, password) == true)
    {
        std::cout << "Administrator clearance pass\n";
    }
    else
    {
        std::cout << "Administrator clearance fail\n";
    }

    // Testing user clearance
    std::cout << "Testing User clearance for abbott\n";
    username = "abbott";
    password = "monday";
    // User loging in with username and passoword
    if (User::login(username, password) == true)
    {
        std::cout << "User clearance pass\n";
    }
    else
    {
        std::cout << "User clearance failed\n";
    }

    return 0;
}