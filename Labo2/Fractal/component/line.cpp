#include "line.h"

Line::Line()
{

}

Line::~Line()
{

}

void Line::operation()
{

}

QPointF Line::p1() const
{
    return p1;
}

QPointF Line::p2() const
{
    return p2;
}

void Line::setP1(QPointF p1)
{
    this->p2 = p2;
}

void Line::setP2(QPointF p2)
{
    this->p1 = p1;
}

