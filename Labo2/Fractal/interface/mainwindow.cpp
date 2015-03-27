#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qcw= new QCentralWidget(this);
    setCentralWidget(qcw);
}

MainWindow::~MainWindow()
{

}
