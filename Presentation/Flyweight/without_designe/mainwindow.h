#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class WidgetControl;
class WidgetDrawing;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_widgetControl_start();

private:
    WidgetControl *widgetControl;
    WidgetDrawing *widgetDrawing;
};

#endif // MAINWINDOW_H
