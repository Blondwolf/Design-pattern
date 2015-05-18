#ifndef WIDGETCONTROL_H
#define WIDGETCONTROL_H

#include <QWidget>

class QPushButton;
class QLabel;

class WidgetControl : public QWidget
{
    Q_OBJECT
public:
    explicit WidgetControl(QWidget *parent = 0);
    ~WidgetControl();

    void setPerformenceMs(int timeMs);

signals:
    void start();

private slots:
    void on_buttonStart_clicked();

private:
    QPushButton *buttonStart;
    QLabel *labelTime;
};

#endif // WIDGETCONTROL_H
