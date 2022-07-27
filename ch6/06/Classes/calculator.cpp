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
    MathVec3D nullVector;

    if(!nullVector) {
        std::cout << "nullVector really has zero values" << std::endl;
    }

    MathVec3D vec1(2.0f, 2.0f, 5.0f);

    if(vec1) {
        std::cout << "vec1 comps are not all 0.0f" << std::endl;
    }


    mResult = MathVec3D(2.0f, 3.0f, 2.0f);

    mResult = mResult + vec1;

    std::cout << "Just setting some value" << std::endl;
}

void Calculator::showResults()
{
    const auto &res = mResult;

    std::cout << "Result: (" << res[0] << ", "
                             << res[1] << ", "
                             << res[2] << ")" << std::endl;
}
