#include "customer.h"
#include <iostream>

Customer::Customer(const std::string &name) :
name(name)
{}

Customer::~Customer()
{
    std::cout << "Customer wird zerstört." << std::endl;
}

std::string Customer::getName()
{
    return this->name;
}

void Customer::rename(const std::string &name)
{
    this->name = name;
}

void askForName(Customer &person)
{
    std::cout << person.getName() << std::endl;
}
