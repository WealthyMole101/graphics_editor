#ifndef FACTORY_H
#define FACTORY_H

#include <memory>
#include "graphic_primitive.h"

class AbstractFactory
{
public:
    virtual std::shared_ptr<graphic_primitive> CreateCircle(int x, int y) const = 0;
    virtual std::shared_ptr<graphic_primitive> CreateRectangle(int x, int y) const = 0;
    virtual std::shared_ptr<graphic_primitive> CreateSquare(int x, int y) const = 0;
    virtual std::shared_ptr<graphic_primitive> CreateTriangle(int x, int y) const = 0;
};

class Factory: public AbstractFactory
{
public:
    std::shared_ptr<graphic_primitive> CreateCircle(int x, int y) const override;
    std::shared_ptr<graphic_primitive> CreateRectangle(int x, int y) const override;
    std::shared_ptr<graphic_primitive> CreateSquare(int x, int y) const override;
    std::shared_ptr<graphic_primitive> CreateTriangle(int x, int y) const override;
};

#endif // FACTORY_H
