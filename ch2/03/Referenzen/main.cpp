#include <iostream>

void squareMeUpNoSense(int x)
{
    x = x*x;
}

void squareMeUpPtr(int *px)
{
    *px = (*px)*(*px);
}

void squareMeUp(int &x)
{
    x = x*x;
}

int main()
{
    int val = 20;

    // Does not work because x in this function is never passed
    squareMeUpNoSense(val);
    std::cout << val << std::endl;

    // With pointers (like you know it from C)
    squareMeUpPtr(&val);
    std::cout << val << std::endl;

    // C++ Reference variant
    squareMeUp(val);
    std::cout << val << std::endl;

    return 0;
}
