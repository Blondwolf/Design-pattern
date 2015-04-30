#ifndef DECORATOR_H
#define DECORATOR_H

#include <iostream>

using namespace std;

class Decorator
{
public:
    Decorator(Decorator *interne);
    ~Decorator();

    virtual string showFruit() const = 0;

protected:
    Decorator *interne;
};

#endif // DECORATOR_H
