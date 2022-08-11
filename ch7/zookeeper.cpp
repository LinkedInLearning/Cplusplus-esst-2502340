#include "zookeeper.h"

#include <iostream>

Zookeeper::Zookeeper()
{}

void Zookeeper::takeFood(const int amnt)
{
    mBagsOfFood -= amnt;
}

void Zookeeper::printResources()
{
    std::cout << "Bags of Food: " << mBagsOfFood << std::endl;
}
