#ifndef DECORATIOETOILE_H
#define DECORATIOETOILE_H

#include "decorator.h"

class DecoratioEtoile : public Decorator
{
public:
    DecoratioEtoile( Decorator *interne);
    ~DecoratioEtoile();

    virtual string showFruit() const;

};

#endif // DECORATIOETOILE_H
