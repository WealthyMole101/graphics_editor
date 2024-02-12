#include "circle.h"

circle::circle(int x, int y, int radius): _x(x), _y(y), _radius(radius)
{
    _line_color = Color::BLUE;
    _background_color = Color::RED;
}

void circle::set_line_color(Color color)
{

}

void circle::set_background_color(Color color)
{

}

void circle::set_coordinates(int x, int y)
{

}

void circle::set_radius(int radius)
{

}

std::tuple<int, int> circle::get_coordinates()
{
    return std::tuple<int, int>(_x, _y);
}

void circle::draw()
{

}
