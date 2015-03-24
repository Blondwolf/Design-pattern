#ifndef QCENTRALWIDGET_H
#define QCENTRALWIDGET_H
#include "qdessinwidget.h"
#include "qparametrewidget.h"

class QCentralWidget : public QWidget
{
public:
    QCentralWidget(QWidget *parent = 0);
    QParametreWidget *qpw;
    QDessinWidget *qdw;

};

#endif // QCENTRALWIDGET_H
