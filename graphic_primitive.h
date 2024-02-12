#ifndef GRAPHIC_PRIMITIVE_H
#define GRAPHIC_PRIMITIVE_H

#include <tuple>

/*!
\file
\brief


*/

/// Interface for graphic primitives.
class graphic_primitive
{
public:
    /// Acceptable colors.
    enum class Color {RED, GREEN, BLUE};
    /// Acceptable shape types.
    enum class Type {CICLE, RECTANGLE, SQUARE, TRIANGLE};

    /// Constructor.
    graphic_primitive();
    /// Destructor.
    virtual ~graphic_primitive();
    /// Set line color.
    virtual void set_line_color(Color color) = 0;
    /// Set the background color of the shape.
    virtual void set_background_color(Color color) = 0;
    /// Setting new coordinates for the figure.
    virtual void set_coordinates(int x, int y) = 0;
    /// Returns the coordinates of a figure.
    virtual std::tuple<int, int> get_coordinates() = 0;
    /// Drawing a figure.
    virtual void draw() = 0;
};

#endif // GRAPHIC_PRIMITIVE_H
