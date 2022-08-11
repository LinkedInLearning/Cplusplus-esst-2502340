#include <iostream>

struct Vec2D
{
    int x;
    int y;
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
