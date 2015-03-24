#ifndef QCENTRALWIDGET_H
#define QCENTRALWIDGET_H
#include "qdessinwidget.h"
#include "qparametrewidget.h"

class QCentralWidget : public QWidget
{
    Q_OBJECT
public:
    explicit QCentralWidget(QWidget *parent = 0);
    ~QCentralWidget();

    QParametreWidget *qpw;
    QDessinWidget *qdw;

};

#endif // QCENTRALWIDGET_H
