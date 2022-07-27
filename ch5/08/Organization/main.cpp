#include <iostream>
#include <string>

#include "customer.h"

int main()
{
    Customer john("John Doe");

    std::cout << john.getName() << std::endl;

    john.rename("John Dont");

    // Member is unprotected!
    john.mName = "test";

    std::cout << john.getName() << std::endl;

    return 0;
}
