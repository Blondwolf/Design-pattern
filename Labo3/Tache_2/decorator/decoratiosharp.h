#ifndef DECORATIOSHARP_H
#define DECORATIOSHARP_H

#include "decorator.h"

class DecoratioSharp : public Decorator
{
public:
    DecoratioSharp( Decorator *interne);
    ~DecoratioSharp();

    virtual string showFruit() const;

};

#endif // DECORATIOSHARP_H
