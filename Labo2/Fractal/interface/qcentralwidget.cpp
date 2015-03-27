#include "qcentralwidget.h"
#include "qdessinwidget.h"
#include "qparametrewidget.h"
#include "qprogresswiget.h"
#include <QtWidgets>

QCentralWidget::QCentralWidget(QWidget *parent):QWidget(parent)
{
    parametreWidget= new QParametreWidget(this);
    dessinWidget = new QDessinWidget(this);
    progressWiget = new QProgressWiget(this);

    QGridLayout *gl= new QGridLayout(this);
    gl->addWidget(parametreWidget,0,0);
    gl->addWidget(progressWiget,1,0);
    gl->addWidget(dessinWidget,1,1, 10,10);
}

QCentralWidget::~QCentralWidget()
{

}
