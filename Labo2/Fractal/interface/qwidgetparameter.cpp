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

    spinboxNbSide= new QSpinBox(this);
    spinboxNbIteration= new QSpinBox(this);
    spinboxSideSize= new QDoubleSpinBox(this);
    spinboxTriangleBase= new QDoubleSpinBox(this);
    spinboxTriangleHeight= new QDoubleSpinBox(this);

    spinboxNbSide->setMinimum(1);
    spinboxTriangleHeight->setMinimum(0);
    spinboxTriangleBase->setMinimum(0);
    spinboxSideSize->setMinimum(0);
    spinboxNbIteration->setMinimum(0);

    spinboxNbSide->setMaximum(20);
    spinboxNbIteration->setMaximum(8);
    spinboxSideSize->setMaximum(1000);
    spinboxTriangleBase->setMaximum(1000);
    spinboxTriangleHeight->setMaximum(1000);

    spinboxNbSide->setValue(5);
    spinboxNbIteration->setValue(5);
    spinboxSideSize->setValue(400);
    spinboxTriangleBase->setValue(200);
    spinboxTriangleHeight->setValue(100);

    QFormLayout *fl = new QFormLayout(this);

    fl->addRow(labelNbSide, spinboxNbSide);
    fl->addRow(labelSideSize, spinboxSideSize);
    fl->addRow(labelTriangleBase, spinboxTriangleBase);
    fl->addRow(labelTriangleHeight, spinboxTriangleHeight);
    fl->addRow(labelNbIteration, spinboxNbIteration);

    setMaximumWidth(300);
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
