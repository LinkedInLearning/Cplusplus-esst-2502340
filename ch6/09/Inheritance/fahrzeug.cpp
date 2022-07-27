#include "fahrzeug.h"

#include <iostream>

Fahrzeug::Fahrzeug()
{

}

void Fahrzeug::showSpeed() const
{
    std::cout << "Fahrzeug: Speed = " << mSpeed << "km/h" << std::endl;
}
