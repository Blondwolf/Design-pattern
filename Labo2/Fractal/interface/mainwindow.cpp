#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    qcw= new QCentralWidget(this);
    qcw->resize(750,550);
    qcw->setMaximumSize(750,550);
    qcw->setMaximumSize(750,550);
    this->CreateAction();
    this->CreateMenu();
    this->CreateToolbar();
    this->setCentralWidget(qcw);
}

MainWindow::~MainWindow()
{

}

void MainWindow::Start()
{

}

void MainWindow::CreateAction()
{
    StartAct=new QAction(QIcon("./Images/start.png"), tr("&Start"),this);
    StartAct->setShortcut(tr("Ctrl+D"));
    StartAct->setStatusTip(tr("Démarrer"));
    connect(StartAct,SIGNAL (triggered()),this, SLOT(Start()));
}

void MainWindow::CreateMenu()
{
    AppMenu = menuBar()->addMenu(tr("&Application"));
    AppMenu->addAction(StartAct);
}

void MainWindow::CreateToolbar()
{
    AppToolBar= addToolBar(tr("&Application"));
    AppToolBar->addAction(StartAct);
}
