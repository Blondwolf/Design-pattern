#ifndef QDESSINWIDGET_H
#define QDESSINWIDGET_H

#include <QWidget>

class Component;

class QDessinWidget:public QWidget
{
    Q_OBJECT
public:
    explicit QDessinWidget(QWidget *parent = 0);
    ~QDessinWidget();

    virtual void paintEvent(QPaintEvent *e);

    void setComponentToDraw(Component *c);

private:
    Component *component;
};

#endif // QDESSINWIDGET_H
