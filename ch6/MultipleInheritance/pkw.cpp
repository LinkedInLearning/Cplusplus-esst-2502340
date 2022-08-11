#include "pkw.h"

#include <iostream>

PKW::PKW()
{

}

void PKW::accelerate()
{
    mSpeed += 1.0f;
}

void PKW::showSpeed() const
{
    std::cout << "PKW: Speed is " << mSpeed << " km/h." << std::endl;
}

void PKW::showValues()
{
    std::cout << "PKW: Speed is " << mSpeed << " km/h." << std::endl;
    std::cout << "PKW: Position is " << getPos() << " km." << std::endl;
}
