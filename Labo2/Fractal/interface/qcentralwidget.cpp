#include "qcentralwidget.h"
#include <QtWidgets>

QCentralWidget::QCentralWidget(QWidget *parent):QWidget(parent)
{
    qpw= new QParametreWidget(this);
    qdw = new QDessinWidget(this);
    QHBoxLayout *h= new QHBoxLayout(this);
    h->addWidget(qpw);
    h->addWidget(qdw);
}

QCentralWidget::~QCentralWidget()
{

}
