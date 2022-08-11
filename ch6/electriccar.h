#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "pkw.h"

class ElectricCar : public PKW
{
public:

    void accelerate(const float seconds) override;

    ElectricCar();

private:

    const float mAcceleration = 20000.0f; // km/(h^2)
};

#endif // ELECTRICCAR_H
