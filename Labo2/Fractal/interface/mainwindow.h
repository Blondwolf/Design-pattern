#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcentralwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QCentralWidget *qcw;
private slots:
    void Start();
private:
    void CreateAction();
    void CreateMenu();
    void CreateToolbar();
    QAction *StartAct;
    QMenu *AppMenu;
    QToolBar *AppToolBar;

};

#endif // MAINWINDOW_H
