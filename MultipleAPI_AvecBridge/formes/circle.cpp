#include "circle.h"

Circle::Circle(APIs_implementor &api) : Shape(api)
{
    r = 0;
}

Circle::~Circle()
{
    //dtor
}

void Circle::draw()
{
    drawCircle(getX(),getY(),r);
}

int Circle::getR() const
{
    return r;
}

void Circle::setR(int r)
{
    this->r = r;
}
