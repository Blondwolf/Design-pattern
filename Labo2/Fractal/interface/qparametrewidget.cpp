#include "qparametrewidget.h"
#include <QtWidgets>

QParametreWidget::QParametreWidget(QWidget *parent):QWidget(parent)
{
    _lblNbCotePolygone= new QLabel("Nombre de côté du polygone:", this);
    _lblLgArretePolygone= new QLabel("Longueur de l'arrête du polygone:",this);
    _lblLgBaseTriangle= new QLabel("Longueur de la base du triangle:",this);
    _lblHtTriangle= new QLabel("Hauteur du triangle:",this);
    _lblNbIteration= new QLabel("Nombre d'iterration(s):",this);

    _nbCotePolygone= new QSpinBox(this);
    _nbIteration= new QSpinBox(this);
    _lgArretePolygone= new QDoubleSpinBox(this);
    _lgBaseTriangle= new QDoubleSpinBox(this);
    _htTriangle= new QDoubleSpinBox(this);

    _nbCotePolygone->setMinimum(1);
    _nbCotePolygone->setValue(5);
    _nbIteration->setMinimum(0);
    _nbIteration->setValue(5);
    _lgArretePolygone->setMinimum(0);
    _lgArretePolygone->setMaximum(1000);
    _lgArretePolygone->setValue(50);
    _lgBaseTriangle->setMinimum(0);
    _lgBaseTriangle->setValue(20);
    _lgBaseTriangle->setMaximum(1000);
    _htTriangle->setMinimum(0);
    _htTriangle->setValue(30);
    _htTriangle->setMaximum(1000);

    /* Mise en forme de la fenêtre */
    QFormLayout *fl = new QFormLayout(this);

    fl->addRow(_lblNbCotePolygone, _nbCotePolygone);
    fl->addRow(_lblLgArretePolygone, _lgArretePolygone);
    fl->addRow(_lblLgBaseTriangle, _lgBaseTriangle);
    fl->addRow(_lblHtTriangle, _htTriangle);
    fl->addRow(_lblNbIteration, _nbIteration);

    setMaximumWidth(300);
}

QParametreWidget::~QParametreWidget()
{

}

int QParametreWidget::nbCotePolygone() const
{
    return _nbCotePolygone->value();
}

int QParametreWidget::nbIteration() const
{
    return _nbIteration->value();
}

double QParametreWidget::arretePolygone() const
{
    return _lgArretePolygone->value();
}

double QParametreWidget::baseTriangle() const
{
    return _lgBaseTriangle->value();
}

double QParametreWidget::hauteurTriangle() const
{
    return _htTriangle->value();
}
