#include "electriccar.h"

ElectricCar::ElectricCar()
{

}

void ElectricCar::accelerate(const float seconds)
{
    setSpeed(getSpeed() + mAcceleration*(seconds/3600));
}
