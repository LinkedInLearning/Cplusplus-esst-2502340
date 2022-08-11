#include <iostream>

#include "pkw.h"

int main()
{
    Fahrzeug *fzeug = new PKW;

    auto *cabrio = dynamic_cast<PKW*>(fzeug); // From Base -> Derived

    if(cabrio) // nullptr set if dynamic_cast failed
    {
        cabrio->accelerate();
        cabrio->showValues();
    }

    Fahrzeug *upwardCast = static_cast<PKW*>(cabrio); // From Derived -> Base. Also good for primitive types (v.g. float to int)

    upwardCast->showSpeed();

    void *dirtyCast = reinterpret_cast<void*>(fzeug);

    const auto *immutableCar = const_cast<const PKW*>(cabrio); // For setting or removing const

    immutableCar->showSpeed(); // OK
    //immutableCar->accelerate(); // ERROR

    // Classical casts
    auto x = float(2); // Function style cast

    auto y = (float)(2); // C-Style cast

    delete fzeug;

    return 0;
}
