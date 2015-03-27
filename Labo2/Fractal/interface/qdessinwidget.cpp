#include "qdessinwidget.h"
#include <QtWidgets>
#include "component/component.h"

QDessinWidget::QDessinWidget(QWidget *parent):QWidget(parent)
{
    component = 0;
    setMinimumSize(300,300);
}

QDessinWidget::~QDessinWidget()
{

}

void QDessinWidget::paintEvent(QPaintEvent *e)
{
    QWidget::paintEvent(e);
    if(component != 0)
    {
        QPainter gc(this);
        gc.save();

        gc.translate(width()/2, height() /2);
        component->draw(gc);

        gc.restore();
    }
}

void QDessinWidget::setComponentToDraw(Component *c)
{
    if(component != 0) delete component;
    component = c;
}
