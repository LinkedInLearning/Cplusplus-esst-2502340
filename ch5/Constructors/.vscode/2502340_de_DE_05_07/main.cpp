#include <iostream>
#include <string>

#include "customer.h"

int main()
{
    Customer john("John Doe");
    Customer james;

    std::cout << john.getName() << std::endl;

    std::cout << james.getName() << std::endl;

    john.rename("John Dont");

    std::cout << john.getName() << std::endl;

    return 0;
}
