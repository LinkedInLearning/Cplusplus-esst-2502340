#ifndef PKW_H
#define PKW_H

#include "fahrzeug.h"

class PKW : virtual public Fahrzeug
{
public:
    PKW();

    virtual void accelerate() override;
    void showSpeed() const override;
    void showValues();
};

#endif // PKW_H
