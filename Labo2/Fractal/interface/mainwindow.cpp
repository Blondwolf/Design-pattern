#include "mainwindow.h"

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qcw= new QWidgetCentral(this);
    setCentralWidget(qcw);

    setWindowTitle(tr("Labo 2 : Fractal"));
}

MainWindow::~MainWindow()
{

}
