#ifndef QPARAMETREWIDGET_H
#define QPARAMETREWIDGET_H
#include <QtWidgets>

class QParametreWidget: public QWidget
{
    Q_OBJECT
public:
    explicit QParametreWidget(QWidget *parent = 0);
    ~QParametreWidget();

    /* Déclaration des labels */
    QLabel *lblNbCotePolygone;
    QLabel *lblLgArretePolygone;
    QLabel *lblLgBaseTriangle;
    QLabel *lblHtTriangle;
    QLabel *lblNbIteration;

    /* Déclaration des lineEdits */
    QLineEdit *NbCotePolygone;
    QLineEdit *LgArretePolygone;
    QLineEdit *LgBaseTriangle;
    QLineEdit *HtTriangle;

    /* Déclaration du slider */
    QSlider *NbIteration;

public slots:
    void value(int);

};

#endif // QPARAMETREWIDGET_H
