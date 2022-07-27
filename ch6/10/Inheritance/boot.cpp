#include "boot.h"

#include <iostream>

Boot::Boot()
{

}

void Boot::accelerate()
{
    mSpeed += 0.5;
}

void Boot::showStatus() const
{
    std::cout << "Boot: Speed is " << mSpeed << " kilometer per hour" << std::endl;
}
