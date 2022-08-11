#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "mathvec3d.h"

#include <string>

class Calculator
{
public:
    Calculator(const std::string &name);

    virtual ~Calculator();

    void doSomeMath();

    void showResults();

private:

    MathVec3D mResult;
    std::string mName;
};

#endif // CALCULATOR_H
