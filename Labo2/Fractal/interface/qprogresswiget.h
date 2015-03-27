#ifndef QPROGRESSWIGET_H
#define QPROGRESSWIGET_H

#include <QWidget>

class QLabel;
class QProgressBar;
class QPushButton;

class QProgressWiget : public QWidget
{
    Q_OBJECT
public:
    explicit QProgressWiget(QWidget *parent = 0);
    ~QProgressWiget();

public slots:
    void setProgress(int percent);

private:
    QLabel *_lblProgress;
    QProgressBar *_progressBar;
    QPushButton *_btStart;

};

#endif // QPROGRESSWIGET_H
