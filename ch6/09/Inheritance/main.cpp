#include <iostream>

#include "pkw.h"
#include "boot.h"

int main()
{
    PKW cabrio;
    Boot motorBoot;

    //Fahrzeug fz; // Error, because Fahrzeug is an abstract class due to virtual void accelerate() = 0;
    Fahrzeug *fz = static_cast<Fahrzeug*>(&cabrio);
    fz->accelerate();
    fz->accelerate();

    fz = static_cast<Fahrzeug*>(&motorBoot);
    fz->accelerate();
    fz->accelerate();


    cabrio.showValues();
    motorBoot.showStatus();


    return 0;
}
