#include "qcentralwidget.h"
#include "qdessinwidget.h"
#include "qparametrewidget.h"
#include "qprogresswiget.h"
#include <QtWidgets>
#include "algorithme/fractal.h"

QCentralWidget::QCentralWidget(QWidget *parent):QWidget(parent)
{
    parametreWidget= new QParametreWidget(this);
    dessinWidget = new QDessinWidget(this);
    progressWiget = new QProgressWiget(this);

    QGridLayout *gl= new QGridLayout(this);
    gl->addWidget(parametreWidget,0,0);
    gl->addWidget(progressWiget,1,0);
    gl->addWidget(dessinWidget,0,1, 2,2);

    connect(progressWiget, SIGNAL(start()), this, SLOT(on_progressWiget_start()));
}

QCentralWidget::~QCentralWidget()
{

}

void QCentralWidget::on_progressWiget_start()
{
    Fractal f(
                parametreWidget->nbCotePolygone(),
                parametreWidget->arretePolygone(),
                parametreWidget->baseTriangle(),
                parametreWidget->hauteurTriangle(),
                parametreWidget->nbIteration());
    f.run();
    dessinWidget->setComponentToDraw(f.getComponent());
    repaint();
}
