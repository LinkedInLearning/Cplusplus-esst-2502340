#include "electriccar.h"
#include "dieselcar.h"

#include <iostream>

int main()
{
    DieselCar p308;
    ElectricCar tesla;

    // Accelerate for one second
    // Assume that while accelerating the position is kept the same.
    // (like car is not touching surface while getting sped up)
    p308.accelerate(10.0);
    tesla.accelerate(10.0);

    // Show me how fast and far you are.
    std::cout << "How fast are the cars now?" << std::endl;
    std::cout << "p308:" << std::endl;
    p308.showValues();
    std::cout << "tesla:" << std::endl;
    tesla.showValues();

    // Drive a bit
    // Now the position changes.
    // (Car touches the surface)
    p308.drive(10.0);
    tesla.drive(10.0);

    // Show me how fast and far you are.
    std::cout << "How fast are the cars after driving a bit?" << std::endl;
    std::cout << "p308:" << std::endl;
    p308.showValues();
    std::cout << "tesla:" << std::endl;
    tesla.showValues();


    return 0;
}
