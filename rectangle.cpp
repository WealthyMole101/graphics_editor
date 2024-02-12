#include "rectangle.h"

rectangle::rectangle(int x, int y, int width, int heigth): _x(x), _y(y), _width(width), _heigth(heigth)
{
    _line_color = Color::BLUE;
    _background_color = Color::RED;
}

void rectangle::set_line_color(Color color)
{

}

void rectangle::set_background_color(Color color)
{

}

void rectangle::set_coordinates(int x, int y)
{

}

void rectangle::set_geometry(int width, int heigth)
{

}

std::tuple<int, int> rectangle::get_coordinates()
{
    return std::tuple<int, int>(_x, _y);
}

void rectangle::draw()
{

}
