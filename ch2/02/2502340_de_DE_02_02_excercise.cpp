// PROBLEM: Das Ergebnis von v3 stimmt nicht:
// "v3 = (4294967295, 4294967295)"
// Bitte schauen Sie sich diesen Code genau an und beheben sie das Problem

#include <iostream>

struct Vec2D
{
    unsigned int x;
    unsigned int y;
};

int main()
{
    Vec2D v1 = {1,2};
    Vec2D v2 = {2,3};

    Vec2D v3;
    v3.x = v1.x - v2.x;
    v3.y = v1.y - v2.y;

    std::cout << "v3 = (" << v3.x << ", " << v3.y << ")"  << std::endl;
}