#ifndef WETNELLIE_H
#define WETNELLIE_H

#include "boot.h"
#include "pkw.h"

class WetNellie : public PKW, public Boot
{
public:
    WetNellie();

    virtual void accelerate() override;
};

#endif // WETNELLIE_H
