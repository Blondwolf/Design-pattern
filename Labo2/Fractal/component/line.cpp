#include "line.h"
#include <QPainter>

Line::Line()
{

}

Line::~Line()
{

}

void Line::draw(QPainter &gc)
{
    gc.drawLine(_p1, _p2);
}

QPointF Line::p1() const
{
    return _p1;
}

QPointF Line::p2() const
{
    return _p2;
}

void Line::setP1(QPointF p1)
{
    _p1 = p1;
}

void Line::setP2(QPointF p2)
{
    _p2 = p2;
}

