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
    MathVec3D vec1(2.0f, 2.0f, 5.0f);
    mResult.setValue(2.0f, 3.0f, 2.0f);

    mResult = mResult + vec1;

    std::cout << "Just setting some value" << std::endl;
}

void Calculator::showResults()
{
    const auto &res = mResult;

    std::cout << "Result: (" << res.getX() << ", "
                             << res.getY() << ", "
                             << res.getZ() << ")" << std::endl;
}
