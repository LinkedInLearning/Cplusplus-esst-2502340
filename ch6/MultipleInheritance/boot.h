#ifndef BOOT_H
#define BOOT_H

#include "fahrzeug.h"

class Boot : virtual public Fahrzeug
{
public:
    Boot();

    virtual void accelerate() override;

    void showStatus() const;
};

#endif // BOOT_H
