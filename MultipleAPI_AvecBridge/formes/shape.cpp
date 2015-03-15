#include "shape.h"
#include "../APIs_abstraction/APIs_implementor.h"

Shape::Shape(APIs_implementor &api) : api(api)
{
    x = 0;
    y = 0;
}

Shape::~Shape()
{

}

int Shape::getY() const
{
    return y;
}

int Shape::getX() const
{
    return x;
}

void Shape::setY(int y)
{
    this->y = y;
}

void Shape::setX(int x)
{
    this->x = x;
}

void Shape::drawCircle(int x, int y, int r)
{
    api.drawCircle(x,y,r);
}

void Shape::drawHexagon(int x, int y, int r, int a)
{
    api.drawHexagon(x,y,r,a);
}

void Shape::drawRectangle(int x, int y, int l, int w, int a)
{
    api.drawRectangle(x,y,l,w,a);
}
