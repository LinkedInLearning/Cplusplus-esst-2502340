#ifndef PKW_H
#define PKW_H

#include "fahrzeug.h"

class PKW : public Fahrzeug
{
public:
    PKW();

    void accelerate();
    void showValues();
};

#endif // PKW_H
