#include <iostream>
#include <string>

#include "customer.h"

int main()
{
    Customer john("John Doe");

    std::cout << john.getName() << std::endl;

    john.rename("John Dont");

    std::cout << john.getName() << std::endl;

    return 0;
}
