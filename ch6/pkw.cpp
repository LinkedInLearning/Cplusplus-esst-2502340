#include "pkw.h"

#include <iostream>

PKW::PKW()
{

}

void PKW::drive(const float seconds)
{
    mPosition += (seconds*getSpeed())/3600;
}

void PKW::showValues() const
{
    Fahrzeug::showValues();
    std::cout << "Pos is " << mPosition*1000 << " m." << std::endl;
}

float PKW::getPosition() const
{
    return mPosition;
}

void PKW::setPosition(float newPosition)
{
    mPosition = newPosition;
}
