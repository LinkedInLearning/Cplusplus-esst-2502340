#include "pkw.h"

#include <iostream>

PKW::PKW()
{

}

void PKW::accelerate()
{
    mSpeed += 1.0f;
}

void PKW::showValues()
{
    std::cout << "Speed is " << mSpeed << " km/h." << std::endl;
}
