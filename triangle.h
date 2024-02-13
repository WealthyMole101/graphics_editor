#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <tuple>
#include "graphic_primitive.h"

/*!
\file
\brief


*/

/// Implementation of a triangle figure.
class triangle : public graphic_primitive
{
public:
    /// Constructor.
    triangle(int x, int y, int base, int a, int b);
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
    /// Set triangle geometry.
    bool set_geometry(int base, int a, int b);

private:
    /// Calculate the size of a triangle based on a side and two adjacent angles.
    std::tuple<int, int, int, int, int, int> calculate();
    Color _line_color; /// Instance line color.
    Color _background_color; /// Instance background color.
    int _x; /// Instance x coordinate.
    int _y; /// Instance y coordinate.
    int _base; /// Base length.
    int _a; /// Angle a adjacent to the base.
    int _b; /// Angle b adjacent to the base.
};

#endif // TRIANGLE_H
