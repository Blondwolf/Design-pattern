#ifndef QPARAMETREWIDGET_H
#define QPARAMETREWIDGET_H

#include <QWidget>

class QLabel;
class QSpinBox;
class QDoubleSpinBox;

class QWidgetParameter: public QWidget
{
    Q_OBJECT

public:
    explicit QWidgetParameter(QWidget *parent = 0);
    ~QWidgetParameter();

    int nbSide() const;
    int nbIteration() const;
    double sideSize() const;
    double triangleBase() const;
    double triangleHeight() const;
    double zoomLevel() const;

signals:
    void zoomChange(double value);

private slots:
    void on_spinboxZoomLevel_valueChanged(double value);

private:
    QLabel *labelNbSide;
    QLabel *labelNbIteration;
    QLabel *labelSideSize;
    QLabel *labelTriangleBase;
    QLabel *labelTriangleHeight;
    QLabel *labelZoomLevel;

    QSpinBox *spinboxNbSide;
    QSpinBox *spinboxNbIteration;
    QDoubleSpinBox *spinboxSideSize;
    QDoubleSpinBox *spinboxTriangleBase;
    QDoubleSpinBox *spinboxTriangleHeight;
    QDoubleSpinBox *spinboxZoomLevel;

    void parameterSpinBox();
};

#endif // QPARAMETREWIDGET_H
