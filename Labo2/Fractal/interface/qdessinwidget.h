#ifndef QDESSINWIDGET_H
#define QDESSINWIDGET_H
#include <QtWidgets>

class QDessinWidget:public QWidget
{
    Q_OBJECT
public:
    explicit QDessinWidget(QWidget *parent = 0);
    ~QDessinWidget();
};

#endif // QDESSINWIDGET_H
