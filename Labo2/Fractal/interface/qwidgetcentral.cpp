#include "qwidgetcentral.h"
#include "qwidgetpainting.h"
#include "qwidgetparameter.h"
#include "qwidgetcontrol.h"
#include "algorithme/fractal.h"
#include "algorithme/threadcontroler.h"

#include <QtWidgets>

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

QWidgetCentral::QWidgetCentral(QWidget *parent):QWidget(parent)
{
    widgetParameter= new QWidgetParameter(this);
    widgetPainting = new QWidgetPainting(this);
    widgetControl = new QWidgetControl(this);
    worker = 0;

    QGridLayout *gl= new QGridLayout(this);
    gl->addWidget(widgetParameter,0,0);
    gl->addWidget(widgetControl,1,0);
    gl->addWidget(widgetPainting,0,1, 2,2);

    Fractal &f = Fractal::getInstance();
    connect(&f, SIGNAL(increaseByOneStep()), widgetControl, SLOT(on_increaseByOneStep()));
    connect(widgetControl, SIGNAL(start()), this, SLOT(on_widgetControl_start()));
}

QWidgetCentral::~QWidgetCentral()
{
    if(worker != 0) delete worker;
}

/*============================================*/
//  SIGNAL / SLOT
/*============================================*/

/**
 * @brief On the start of fractal creation
 */
void QWidgetCentral::on_widgetControl_start()
{
    widgetControl->setEnable(false);

    Fractal &f = Fractal::getInstance();
    f.setNbIteration(widgetParameter->nbIteration());
    f.setNbSide(widgetParameter->sideSize());
    f.setTriangleBase(widgetParameter->triangleBase());
    f.setTriangleHeight(widgetParameter->triangleHeight());
    f.setSideSize(widgetParameter->sideSize());
    f.setNbSide(widgetParameter->nbSide());

    unsigned int max = f.getMaxIterationStep();
    widgetControl->resetProgress();
    widgetControl->setMaxProgress(max);

    if(worker != 0) delete worker;
    worker = new ThreadControler();
    connect(worker, SIGNAL(finishFractal(Component*)),this, SLOT(on_worker_finishFractal(Component *)));
    worker->start();
}

/**
 * @brief At the end of fractal creation
 */
void QWidgetCentral::on_worker_finishFractal(Component *c)
{
    widgetPainting->setComponentToDraw(c);
    widgetControl->setEnable(true);
    repaint();
}


