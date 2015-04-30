#ifndef DECORATIOEQUALS_H
#define DECORATIOEQUALS_H

#include "decorator.h"

class DecoratioEquals : public Decorator
{
public:
    DecoratioEquals( Decorator *interne);
    ~DecoratioEquals();

    virtual string showFruit() const;

};

#endif // DECORATIOEQUALS_H
