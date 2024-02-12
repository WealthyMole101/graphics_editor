#include "square.h"

square::square(int x, int y, int side): _x(x), _y(y), _side(side)
{
    _line_color = Color::BLUE;
    _background_color = Color::RED;
}

void square::set_line_color(Color color)
{

}

void square::set_background_color(Color color)
{

}

void square::set_coordinates(int x, int y)
{

}

void square::set_size(int side)
{

}

std::tuple<int, int> square::get_coordinates()
{
    return std::tuple<int, int>(_x, _y);
}

void square::draw()
{

}
