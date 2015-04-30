#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <list>

class FruitBag : public Component
{
public:
    FruitBag();
    virtual ~FruitBag();

    virtual string showFruit() const;
    virtual bool isContainsPips()const;

    virtual void add(Component *c);
    virtual void remove(Component *c);
    virtual const list<Component *> *getChildren() const;

private:
    list<Component*> listChildren;
};

#endif // COMPOSITE_H
