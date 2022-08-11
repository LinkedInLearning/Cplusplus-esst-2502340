#ifndef BOOT_H
#define BOOT_H

#include "fahrzeug.h"

class Boot : public Fahrzeug
{
public:
    Boot();

    void accelerate() override;

    void showStatus() const;
};

#endif // BOOT_H
