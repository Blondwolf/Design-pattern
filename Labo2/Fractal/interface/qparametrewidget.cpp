#include "qparametrewidget.h"

QParametreWidget::QParametreWidget(QWidget *parent):QWidget(parent)
{
    /* Initialisation des labels */
    lblNbCotePolygone= new QLabel("Nombre de côté du polygone:", this);
    lblLgArretePolygone= new QLabel("Longueur de l'arrête du polygone:",this);
    lblLgBaseTriangle= new QLabel("Longueur de la base du triangle:",this);
    lblHtTriangle= new QLabel("Hauteur du triangle:",this);
    lblNbIteration= new QLabel("Nombre d'iterration(s):7",this);

    /* Initialisation des lineEdits */
    NbCotePolygone= new QLineEdit(this);
    LgArretePolygone= new QLineEdit(this);
    LgBaseTriangle= new QLineEdit(this);
    HtTriangle= new QLineEdit(this);

    /* Initialisation du slider */
    NbIteration= new QSlider(this);
    NbIteration->setMaximum(20);
    NbIteration->setMinimum(3);
    NbIteration->setValue(7);

    /* Mise en forme de la fenêtre */
    QHBoxLayout *Line1 = new QHBoxLayout;
    Line1->addWidget(lblNbCotePolygone);
    Line1->addWidget(NbCotePolygone);

    QHBoxLayout *Line2 = new QHBoxLayout;
    Line2->addWidget(lblLgArretePolygone);
    Line2->addWidget(LgArretePolygone);

    QHBoxLayout *Line3 = new QHBoxLayout;
    Line3->addWidget(lblLgBaseTriangle);
    Line3->addWidget(LgBaseTriangle);

    QHBoxLayout *Line4 = new QHBoxLayout;
    Line4->addWidget(lblHtTriangle);
    Line4->addWidget(HtTriangle);


    QHBoxLayout *Line5 = new QHBoxLayout;
    Line5->addWidget(lblNbIteration);
    Line5->addWidget(NbIteration);

    QVBoxLayout *All= new QVBoxLayout(this);
    All->addLayout(Line1);
    All->addLayout(Line2);
    All->addLayout(Line3);
    All->addLayout(Line4);
    All->addLayout(Line5);

    QGroupBox *GBox= new QGroupBox(this);
    GBox->setLayout(All);
    GBox->resize(250,300);
    GBox->setMaximumSize(250,300);
    GBox->setMinimumSize(250,300);

    /* Connection du QSlider à son slot */
    connect(NbIteration, SIGNAL(valueChanged(int)), this, SLOT(value(int)));

}

QParametreWidget::~QParametreWidget()
{

}

void QParametreWidget::value(int tamp)
{
    tamp = NbIteration->value();
    QString s = QString::number(tamp);
    QString sTot="Nombre d'iterration(s):"+s;
    lblNbIteration->setText(sTot);
}
