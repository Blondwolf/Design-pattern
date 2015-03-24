#ifndef TEST_H
#define TEST_H

#include <QWidget>

class TEST : public QWidget
{
    Q_OBJECT
public:
    explicit TEST(QWidget *parent = 0);
    ~TEST();

signals:

public slots:
};

#endif // TEST_H
