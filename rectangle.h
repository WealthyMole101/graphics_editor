#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "graphic_primitive.h"

/*!
\file
\brief


*/

/// Implementation of a rectangle figure.
class rectangle : public graphic_primitive
{
public:
    /// Constructor.
    rectangle(int x, int y, int width, int heigth);
    /// Set line color.
    void set_line_color(Color color) override;
    /// Set the background color of the shape.
    void set_background_color(Color color) override;
    /// Setting new coordinates for the figure.
    void set_coordinates(int x, int y) override;
    /// Drawing a figure.
    void draw() override;
    /// Returns the coordinates of a figure.
    std::tuple<int, int> get_coordinates() override;
    /// Set rectangle geometry.
    void set_geometry(int width, int heigth);

private:
    Color _line_color; /// Instance line color.
    Color _background_color; /// Instance background color.
    int _x; /// Instance x coordinate.
    int _y; /// Instance y coordinate.
    int _width; /// Instance width.
    int _heigth; /// Instance heigth.
};

#endif // RECTANGLE_H
