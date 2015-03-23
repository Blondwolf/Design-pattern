#include "hexagon.h"

Hexagon::Hexagon(APIs_implementor &api) : Shape(api)
{
    r = 0;
    a = 0;
}

Hexagon::~Hexagon()
{

}

void Hexagon::draw()
{
    drawHexagon(getX(),getY(),r,a);
}

int Hexagon::getR() const
{
    return r;
}

int Hexagon::getA() const
{
    return a;
}

void Hexagon::setR(int r)
{
    this->r = r;
}

void Hexagon::setA(int a)
{
    this->a = a;
}

