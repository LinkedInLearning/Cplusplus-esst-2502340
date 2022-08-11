#include "calculator.h"

#include <iostream>

int Calculator::numCalcs = 0;

Calculator::Calculator(const std::string &name) :
mName(name)
{
    std::cout << "Calculator \"" << mName << "\"  constructed." << std::endl;
    numCalcs++;
    std::cout << "I have " << numCalcs << " calculator(s) running." << std::endl;
}

Calculator::~Calculator()
{
    std::cout << "Calculator \"" << mName << "\" destroyed." << std::endl;
    numCalcs--;
    std::cout << "I have " << numCalcs << " calculator(s) running." << std::endl;
}

void Calculator::doSomeMath()
{
    MathVec3D vec1(1.1f, 1.3f, 1.4f);
    mResult.setValue(1.0f, 1.0f, 1.0f);

    mResult.add(vec1);
    mResult.add(1.0f, 3.2f, 4.3f);

    std::cout << "Just setting some value" << std::endl;
}

void Calculator::showResults()
{
    const auto &res = mResult;

    std::cout << "Result: (" << res.getX() << ", "
                             << res.getY() << ", "
                             << res.getZ() << ")" << std::endl;
}
