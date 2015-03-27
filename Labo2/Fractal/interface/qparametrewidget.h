#ifndef QPARAMETREWIDGET_H
#define QPARAMETREWIDGET_H

#include <QWidget>

class QLabel;
class QSpinBox;
class QDoubleSpinBox;

class QParametreWidget: public QWidget
{
    Q_OBJECT
public:
    explicit QParametreWidget(QWidget *parent = 0);
    ~QParametreWidget();

    int nbCotePolygone() const;
    int nbIteration() const;
    double arretePolygone() const;
    double baseTriangle() const;
    double hauteurTriangle() const;

private:
    QLabel *_lblNbCotePolygone;
    QLabel *_lblLgArretePolygone;
    QLabel *_lblLgBaseTriangle;
    QLabel *_lblHtTriangle;
    QLabel *_lblNbIteration;

    QSpinBox *_nbCotePolygone;
    QSpinBox *_nbIteration;

    QDoubleSpinBox *_lgArretePolygone;
    QDoubleSpinBox *_lgBaseTriangle;
    QDoubleSpinBox *_htTriangle;
};

#endif // QPARAMETREWIDGET_H
