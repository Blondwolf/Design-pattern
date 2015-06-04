#include "widgetcontrol.h"

#include <QPushButton>
#include <QLabel>
#include <QGridLayout>

WidgetControl::WidgetControl(QWidget *parent) : QWidget(parent)
{
    buttonStart = new QPushButton(tr("Start test"), this);
    labelTime = new QLabel(tr("No time"), this);

    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(buttonStart, 0,0);
    layout->addWidget(labelTime, 0,1);

    connect(buttonStart, SIGNAL(clicked()), this, SLOT(on_buttonStart_clicked()));
}

WidgetControl::~WidgetControl()
{

}

void WidgetControl::setPerformenceMs(int timeMs)
{
    labelTime->setText(tr("Time : %1 [ms]").arg(timeMs));
}

void WidgetControl::on_buttonStart_clicked()
{
    emit start();
}

