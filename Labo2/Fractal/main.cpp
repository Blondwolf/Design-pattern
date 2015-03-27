#include "interface/mainwindow.h"
#include "interface/qparametrewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(800,600);
    w.setMinimumSize(800,600);
    w.setMaximumSize(800,600);
    w.show();


    return a.exec();
}
