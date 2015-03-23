#include "composite.h"

Composite::Composite()
{
    listChildren = new QList<Component*>;
}

Composite::~Composite()
{
    qDeleteAll(listChildren);
    delete listChildren;
}

void Composite::operation()
{
    foreach(Component *c, listChildren)
    {
        c->operation();
    }
}

void Composite::add(Component *c)
{
    listChildren.append(c);
}

void Composite::remove(Component *c)
{
    if(listChildren.contains(c))
    {
        listChildren.removeAt(listChildren.indexOf(c));
        delete c;
    }
}

const QList<Component*> Composite::getChildren() const
{
    return listChildren;
}

