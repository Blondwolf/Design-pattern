#include "qwidgetcontrol.h"
#include <QtWidgets>

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

QWidgetControl::QWidgetControl(QWidget *parent) : QWidget(parent)
{
    progressValue = 0;
    progressBar = new QProgressBar(this);
    buttonStart = new QPushButton(tr("Start"),this);

    QVBoxLayout *v= new QVBoxLayout(this);
    v->addWidget(buttonStart);
    v->addWidget(progressBar);
    v->addStretch();

    setMaximumWidth(300);

    connect(buttonStart, SIGNAL(pressed()), this, SLOT(on_buttonStart_pressed()));
}

QWidgetControl::~QWidgetControl()
{

}

/*============================================*/
//  GET / SET
/*============================================*/

void QWidgetControl::setMaxProgress(unsigned int p)
{
    progressBar->setMaximum(p);
}

void QWidgetControl::resetProgress()
{
    progressValue = 0;
}

/*============================================*/
//  SIGNAL / SLOT
/*============================================*/

void QWidgetControl::on_increaseByOneStep()
{
    ++progressValue;
    progressBar->setValue(progressValue);
}

void QWidgetControl::on_buttonStart_pressed()
{
    emit start();
}

