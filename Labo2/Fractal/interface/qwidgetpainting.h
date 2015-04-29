#ifndef QDESSINWIDGET_H
#define QDESSINWIDGET_H

#include <QWidget>

class Component;

class QWidgetPainting:public QWidget
{
    Q_OBJECT

public:
    explicit QWidgetPainting(QWidget *parent = 0);
    ~QWidgetPainting();

    virtual void paintEvent(QPaintEvent *e) Q_DECL_OVERRIDE;

    void setZoomLevel(double scale);

    void setComponentToDraw(Component *c);

private:
    Component *component;
    double scale;
};

#endif // QDESSINWIDGET_H
