#include <iostream>

#include "calculator.h"

void performTasks(Calculator &calc)
{
    calc.doSomeMath();
    calc.showResults();
}

Calculator *tempCalc = nullptr;

void executeCalcs()
{
    // Static case
    Calculator calc1("Calc1");
    performTasks(calc1);

    // Dynamic case
    Calculator *calc2 = new Calculator("Calc2");
    performTasks(*calc2);

    // calc1 is automatically destroyed
    // but calc2 only gets destroyed when delete is called
    delete tempCalc;
}

int main()
{
    executeCalcs();
    return 0;
}
