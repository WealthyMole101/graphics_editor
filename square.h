#ifndef SQUARE_H
#define SQUARE_H

#include "graphic_primitive.h"

/*!
\file
\brief


*/

/// Implementation of a square figure.
class square : public graphic_primitive
{
public:
    /// Constructor.
    square(int x, int y, int side);
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
    /// Set square size.
    void set_size(int side);

private:
    Color _line_color; /// Instance line color.
    Color _background_color; /// Instance background color.
    int _x; /// Instance x coordinate.
    int _y; /// Instance y coordinate.
    int _side; /// Instance side.
};

#endif // SQUARE_H
