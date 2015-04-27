#include "line.h"

#include <QPainter>
#include <QDebug>

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

Line::Line()
{

}

Line::~Line()
{

}

/*============================================*/
//  OVERRIDE
/*============================================*/

void Line::draw(QPainter &gc)
{
    int random= rand() % 5 + 1;

    if (random==1)
    {
        QPen penHLines(QColor("#0e5a77"), 1);
        gc.setPen(penHLines);
    }
    if(random==2)
    {
        QPen penHLines(QColor("#6fc833"), 1);
        gc.setPen(penHLines);
    }
    if(random ==3)
    {
        QPen penHLines(QColor("#ffd700"), 1);
        gc.setPen(penHLines);
    }
    if(random ==4)
    {
        QPen penHLines(QColor("#c14096"), 1);
        gc.setPen(penHLines);
    }


    gc.drawLine(_p1, _p2);

}

/*============================================*/
//  GET / SET
/*============================================*/

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

