#ifndef LINE_H
#define LINE_H


#include "component.h"
#include <QPointF>

class Line : public Component
{
public:
    Line();
    ~Line();

    virtual void operation();

    virtual QPointF p1() const;
    virtual QPointF p2() const;
    virtual void setP1(QPointF p1);
    virtual void setP2(QPointF p2);

private:
    QPointF p1;
    QPointF p2;
};

#endif // LINE_H
