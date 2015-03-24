#ifndef QDESSINWIDGET_H
#define QDESSINWIDGET_H
#include <QtWidgets>

class QDessinWidget:public QWidget
{
public:
    QDessinWidget(QWidget *parent = 0);
    QGraphicsScene * scene;


};

#endif // QDESSINWIDGET_H
