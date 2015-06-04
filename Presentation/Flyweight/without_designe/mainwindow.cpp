#include "mainwindow.h"
#include "widgetcontrol.h"

#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    widgetControl = new WidgetControl(this);
    widgetDrawing = new WidgetDrawing(this);

    QWidget *w = new QWidget(this);
    QGridLayout *layout = new QGridLayout(w);
    layout->addWidget(widgetDrawing, 0,0);
    layout->addWidget(widgetControl, 1,0);
    setCentralWidget(w);

    connect(widgetControl, SIGNAL(start()), this, SLOT(on_widgetControl_start()));
}

MainWindow::~MainWindow()
{

}

void MainWindow::on_widgetControl_start()
{

}

