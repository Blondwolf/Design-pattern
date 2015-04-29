#include "qwidgetparameter.h"

#include <QtWidgets>

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

QWidgetParameter::QWidgetParameter(QWidget *parent):QWidget(parent)
{
    labelNbSide= new QLabel(tr("Polygon's vertex"), this);
    labelSideSize= new QLabel(tr("Polygon's side size"),this);
    labelTriangleBase= new QLabel(tr("Triangle base size"),this);
    labelTriangleHeight= new QLabel(tr("Triangle height"),this);
    labelNbIteration= new QLabel(tr("Number of iteration"),this);
    labelZoomLevel = new QLabel(tr("Zoom level"),this);

    spinboxNbSide= new QSpinBox(this);
    spinboxNbIteration= new QSpinBox(this);
    spinboxSideSize= new QDoubleSpinBox(this);
    spinboxTriangleBase= new QDoubleSpinBox(this);
    spinboxTriangleHeight= new QDoubleSpinBox(this);
    spinboxZoomLevel= new QDoubleSpinBox(this);

    parameterSpinBox();

    QFormLayout *fl = new QFormLayout(this);

    fl->addRow(labelNbSide, spinboxNbSide);
    fl->addRow(labelSideSize, spinboxSideSize);
    fl->addRow(labelTriangleBase, spinboxTriangleBase);
    fl->addRow(labelTriangleHeight, spinboxTriangleHeight);
    fl->addRow(labelNbIteration, spinboxNbIteration);
    fl->addRow(labelZoomLevel, spinboxZoomLevel);

    setMaximumWidth(300);

    connect(spinboxZoomLevel, SIGNAL(valueChanged(double)), this, SLOT(on_spinboxZoomLevel_valueChanged(double)));
}

QWidgetParameter::~QWidgetParameter()
{

}

/*============================================*/
//  GET / SET
/*============================================*/

int QWidgetParameter::nbSide() const
{
    return spinboxNbSide->value();
}

int QWidgetParameter::nbIteration() const
{
    return spinboxNbIteration->value();
}

double QWidgetParameter::sideSize() const
{
    return spinboxSideSize->value();
}

double QWidgetParameter::triangleBase() const
{
    return spinboxTriangleBase->value();
}

double QWidgetParameter::triangleHeight() const
{
    return spinboxTriangleHeight->value();
}

double QWidgetParameter::zoomLevel() const
{
    return spinboxZoomLevel->value();
}

/*============================================*/
//  SIGNAL / SLOT
/*============================================*/

void QWidgetParameter::on_spinboxZoomLevel_valueChanged(double value)
{
    emit zoomChange(value);
}

/*============================================*/
//  PRIVATE
/*============================================*/

void QWidgetParameter::parameterSpinBox()
{
    spinboxNbSide->setRange(1,20);
    spinboxNbIteration->setRange(0,8);
    spinboxSideSize->setRange(0,1000);
    spinboxTriangleBase->setRange(0,1000);
    spinboxTriangleHeight->setRange(0,1000);
    spinboxZoomLevel->setRange(0,10);

    spinboxNbSide->setValue(5);
    spinboxNbIteration->setValue(5);
    spinboxSideSize->setValue(400);
    spinboxTriangleBase->setValue(200);
    spinboxTriangleHeight->setValue(100);
    spinboxZoomLevel->setValue(1);

    spinboxNbSide->setSingleStep(1);
    spinboxNbIteration->setSingleStep(1);
    spinboxSideSize->setSingleStep(25);
    spinboxTriangleBase->setSingleStep(25);
    spinboxTriangleHeight->setSingleStep(25);
    spinboxZoomLevel->setSingleStep(0.1);
}
