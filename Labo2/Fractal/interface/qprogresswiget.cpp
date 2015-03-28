#include "qprogresswiget.h"
#include <QtWidgets>

QProgressWiget::QProgressWiget(QWidget *parent) : QWidget(parent)
{
    _progressBar = new QProgressBar(this);
    _progressBar->setMinimum(0);
    _progressBar->setMaximum(100);
    _btStart = new QPushButton("Start",this);

    QVBoxLayout *v= new QVBoxLayout(this);
    v->addWidget(_btStart);
    v->addWidget(_progressBar);
    v->addStretch();

    setMaximumWidth(300);

    connect(_btStart, SIGNAL(pressed()), this, SLOT(on__btStart_pressed()));
}

QProgressWiget::~QProgressWiget()
{

}

void QProgressWiget::setProgress(int percent)
{
    _progressBar->setValue(percent);
}

void QProgressWiget::on__btStart_pressed()
{
    emit start();
}

