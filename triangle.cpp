#include "triangle.h"

triangle::triangle(int x, int y, int base, int a, int b): _x(x), _y(y), _base(base), _a(a), _b(b)
{
    _line_color = Color::BLUE;
    _background_color = Color::RED;
}

void triangle::set_line_color(Color color)
{

}

void triangle::set_background_color(Color color)
{

}

void triangle::set_coordinates(int x, int y)
{

}

void triangle::draw()
{
    auto result = calculate();
}

std::tuple<int, int> triangle::get_coordinates()
{
    return std::tuple<int, int>(_x, _y);
}

std::tuple<int, int, int, int, int, int> triangle::calculate()
{
    //Вычисляем размер треугольника по стороне и двум прилегающим углам
    //...
    return std::tuple<int, int, int, int, int, int>(1, 1, 1, 60, 60, 60);
}
