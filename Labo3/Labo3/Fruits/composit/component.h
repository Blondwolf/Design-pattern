#ifndef COMPONENT_H
#define COMPONENT_H

#include <QString>
#include "../decorator/decorator.h"

class Component : public Decorator
{
public:
    Component();
    virtual ~Component();

    virtual QString showFruit() const = 0;
    virtual bool isContainsPips()const = 0;
};

#endif // COMPONENT_H
