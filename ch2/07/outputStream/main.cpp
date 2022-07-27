#include <iostream>
#include <string>

int main()
{
    const int zahl = 42;
    const float simplePi = 3.14f;
    const double betterPi = 3.1459f;
    const std::string SomeText = "Hello Text";

    std::cout << zahl << std::endl;
    std::cout << simplePi << std::endl;
    std::cout << betterPi << std::endl;
    std::cout << SomeText << std::endl;
    return 0;
}
