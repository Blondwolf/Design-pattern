#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <QList>

class FruitBag : public Component
{
public:
    FruitBag();
    virtual ~FruitBag();

    virtual QString showFruit() const;
    virtual bool isContainsPips()const;

    virtual void add(Component *c);
    virtual void remove(Component *c);
    virtual const QList<Component *> *getChildren() const;

private:
    QList<Component*> listChildren;
};

#endif // COMPOSITE_H