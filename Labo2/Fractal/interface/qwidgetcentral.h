#ifndef QCENTRALWIDGET_H
#define QCENTRALWIDGET_H

#include <QWidget>

class QWidgetParameter;
class QWidgetPainting;
class QWidgetControl;
class ThreadControler;
class Component;

class QWidgetCentral : public QWidget
{
    Q_OBJECT

public:
    explicit QWidgetCentral(QWidget *parent = 0);
    ~QWidgetCentral();

private slots:
    void on_widgetControl_start();
    void on_worker_finishFractal(Component *c);
    void on_widgetParameter_zoomChange(double value);

private:
    QWidgetParameter *widgetParameter;
    QWidgetPainting *widgetPainting;
    QWidgetControl *widgetControl;
    ThreadControler *worker;
};

#endif // QCENTRALWIDGET_H
