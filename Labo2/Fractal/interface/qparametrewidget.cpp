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
    _nbIteration->setMinimum(0);
    _lgArretePolygone->setMinimum(0);
    _lgBaseTriangle->setMinimum(0);
    _htTriangle->setMinimum(0);

    /* Mise en forme de la fenêtre */
    QFormLayout *fl = new QFormLayout(this);

    fl->addRow(_lblNbCotePolygone, _nbCotePolygone);
    fl->addRow(_lblLgArretePolygone, _lgArretePolygone);
    fl->addRow(_lblLgBaseTriangle, _lgBaseTriangle);
    fl->addRow(_lblHtTriangle, _htTriangle);
    fl->addRow(_lblNbIteration, _nbIteration);
}

QParametreWidget::~QParametreWidget()
{

}
