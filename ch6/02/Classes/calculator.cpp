#include "calculator.h"

#include <iostream>

Calculator::Calculator(const std::string &name) :
mName(name)
{
    std::cout << "Calculator \"" << mName << "\"  constructed." << std::endl;
}

Calculator::~Calculator()
{
    std::cout << "Calculator \"" << mName << "\" destroyed." << std::endl;
}

void Calculator::doSomeMath()
{
    mResult.mX = 1.0f;
    mResult.mY = 1.0f;
    mResult.mZ = 1.0f;

    std::cout << "Pretending I am doing some math." << std::endl;
}

void Calculator::showResults()
{
    std::cout << "Nothing to show since I pretended." << std::endl;
}
