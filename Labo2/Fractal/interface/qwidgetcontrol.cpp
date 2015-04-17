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
    //Avoid infinite progress bar if no work to do
    if(p == 0)
    {
        progressBar->setValue(1);
        p = 1;
    }
    progressBar->setMaximum(p);
}

void QWidgetControl::resetProgress()
{
    progressValue = 0;
}

void QWidgetControl::setEnable(bool enabled)
{
    buttonStart->setEnabled(enabled);
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

