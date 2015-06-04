#ifndef WIDGETDRAWING_H
#define WIDGETDRAWING_H

#include <QWidget>

class WidgetDrawing : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetDrawing(QWidget *parent = 0);
    ~WidgetDrawing();

    virtual void paintEvent(QPaintEvent *e);

    void startDrawing();

signals:

public slots:

};

#endif // WIDGETDRAWING_H
