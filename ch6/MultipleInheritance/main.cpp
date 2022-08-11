#include <iostream>

#include "wetnellie.h"

int main()
{
    WetNellie wn;

    wn.accelerate();
    wn.accelerate();

    wn.showValues();
    wn.showStatus();


    return 0;
}
