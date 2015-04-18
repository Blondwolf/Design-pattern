#ifndef COMPONENT_H
#define COMPONENT_H

#include <QString>
#include "../decorator/decorator.h"

class Component : public Decorator
{
public:
    Component();
    virtual ~Component();

    virtual bool isContainsPips()const = 0;
    virtual Component *clone() const = 0;
};

#endif // COMPONENT_H
