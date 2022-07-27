#include "customer.h"

Customer::Customer(const std::string &name)
{
    mName = name;
}

std::string Customer::getName()
{
    return mName;
}

void Customer::rename(const std::string &name)
{
    mName = name;
}

