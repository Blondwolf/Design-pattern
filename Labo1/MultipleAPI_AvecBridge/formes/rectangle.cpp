#include "rectangle.h"

Rectangle::Rectangle(APIs_implementor &api) : Shape(api)
{
    h = 0;
    w = 0;
    a = 0;
}

Rectangle::~Rectangle()
{
    //dtor
}

void Rectangle::draw()
{
    drawRectangle(getX(),getY(),h,w,a);
}

int Rectangle::getA() const
{
    return a;
}

int Rectangle::getW() const
{
    return w;
}

int Rectangle::getH() const
{
    return h;
}


void Rectangle::setA(int a)
{
    this->a = a;
}

void Rectangle::setW(int w)
{
    this->w = w;
}

void Rectangle::setH(int h)
{
    this->h = h;
}

