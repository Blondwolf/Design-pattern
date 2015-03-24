#include "qcentralwidget.h"
#include <QtWidgets>

QCentralWidget::QCentralWidget(QWidget *parent):QWidget(parent)
{
    qpw= new QParametreWidget(this);
    qdw = new QDessinWidget(this);
    QHBoxLayout *h= new QHBoxLayout(this);
    h->addWidget(qpw);
    h->addWidget(qdw);
    QGroupBox *g= new QGroupBox(this);
    g->resize(800,600);
    g->setMaximumSize(800,600);
    g->setMinimumSize(800,600);
    g->show();

}

QCentralWidget::~QCentralWidget()
{

}
