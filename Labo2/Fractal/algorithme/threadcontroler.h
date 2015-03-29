#ifndef THREADCONTROLER_H
#define THREADCONTROLER_H

#include <QThread>

class Component;

/**
 * @brief This class is the worker thread for
 * calculating fractal
 */
class ThreadControler : public QThread
{
    Q_OBJECT

public:
    ThreadControler();
    ~ThreadControler();

    void run() Q_DECL_OVERRIDE ;

signals:
    void finishFractal(Component *c);
};

#endif // THREADCONTROLER_H
