#include <iostream>
#include <string>

#include "customer.h"

int main()
{
    Customer john("John Doe");

    askForName(john);

    john.rename("John Dont");

    askForName(john);

    return 0;
}
