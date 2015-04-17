#ifndef LINE_H
#define LINE_H


#include "component.h"
#include <QPointF>

class Line : public Component
{
public:
    Line();
    virtual ~Line();

    virtual void draw(QPainter &gc) Q_DECL_OVERRIDE;

    virtual QPointF p1() const;
    virtual QPointF p2() const;
    virtual void setP1(QPointF p1);
    virtual void setP2(QPointF p2);

private:
    QPointF _p1;
    QPointF _p2;
};

#endif // LINE_H
