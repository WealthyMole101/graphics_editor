#include "factory.h"
#include"circle.h"
#include"rectangle.h"
#include"square.h"
#include"triangle.h"

std::shared_ptr<graphic_primitive> Factory::CreateCircle(int x, int y) const
{
    int radius = 5;
    return std::shared_ptr<graphic_primitive>(new circle(x, y, radius));
}

std::shared_ptr<graphic_primitive> Factory::CreateRectangle(int x, int y) const
{
    int width = 5;
    int heigth = 6;
    return std::shared_ptr<graphic_primitive>(new rectangle(x, y, width, heigth));
}

std::shared_ptr<graphic_primitive> Factory::CreateSquare(int x, int y) const
{
    int side = 5;
    return std::shared_ptr<graphic_primitive>(new square(x, y, side));
}

std::shared_ptr<graphic_primitive> Factory::CreateTriangle(int x, int y) const
{
    int base = 5;
    int a = 6;
    int b = 7;
    return std::shared_ptr<graphic_primitive>(new triangle(x, y, base, a, b));
}
