#ifndef QPROGRESSWIGET_H
#define QPROGRESSWIGET_H

#include <QWidget>

class QLabel;
class QProgressBar;
class QPushButton;

class QWidgetControl : public QWidget
{
    Q_OBJECT

public:
    explicit QWidgetControl(QWidget *parent = 0);
    ~QWidgetControl();

    void setMaxProgress(unsigned int p);
    void resetProgress();
    void setEnable(bool enabled);

signals:
    void start();

public slots:
    void on_increaseByOneStep();

private slots:
    void on_buttonStart_pressed();

private:
    QProgressBar *progressBar;
    QPushButton *buttonStart;
    unsigned int progressValue;
};

#endif // QPROGRESSWIGET_H
