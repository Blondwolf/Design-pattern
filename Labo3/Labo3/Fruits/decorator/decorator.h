#ifndef DECORATOR_H
#define DECORATOR_H

#include <QString>

class Decorator
{
public:
    Decorator(Decorator *interne);
    ~Decorator();

    virtual QString showFruit() const = 0;

protected:
    Decorator *interne;
};

#endif // DECORATOR_H
