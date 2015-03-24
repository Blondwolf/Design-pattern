#ifndef QDESSINWIDGET_H
#define QDESSINWIDGET_H
#include <QtWidgets>

class QDessinWidget:public QWidget
{
    Q_OBJECT
public:
    explicit QDessinWidget(QWidget *parent = 0);
    ~QDessinWidget();

    QGraphicsScene * scene;


};

#endif // QDESSINWIDGET_H
