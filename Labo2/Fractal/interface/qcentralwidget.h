#ifndef QCENTRALWIDGET_H
#define QCENTRALWIDGET_H

#include <QWidget>

class QParametreWidget;
class QDessinWidget;
class QProgressWiget;

class QCentralWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QCentralWidget(QWidget *parent = 0);
    ~QCentralWidget();

private:
    QParametreWidget *parametreWidget;
    QDessinWidget *dessinWidget;
    QProgressWiget *progressWiget;

};

#endif // QCENTRALWIDGET_H
