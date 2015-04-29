#include "qwidgetpainting.h"
#include "component/component.h"

#include <QtWidgets>

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

QWidgetPainting::QWidgetPainting(QWidget *parent):QWidget(parent)
{
    component = 0;
    scale = 1;
    setMinimumSize(400,400);
}

QWidgetPainting::~QWidgetPainting()
{

}

/*============================================*/
//  OVERRIDE
/*============================================*/

void QWidgetPainting::paintEvent(QPaintEvent *e)
{
    QWidget::paintEvent(e);
    if(component != 0)
    {
        QPainter gc(this);
        gc.save();

        gc.translate(width()/2, height() /2);
        gc.scale(scale, scale);
        gc.drawEllipse(-2,-2,4,4);
        component->draw(gc);

        gc.restore();
    }
}

/*============================================*/
//  GET / SET
/*============================================*/

void QWidgetPainting::setZoomLevel(double scale)
{
    this->scale = scale;
}

void QWidgetPainting::setComponentToDraw(Component *c)
{
    if(component != 0) delete component;
    component = c;
}
