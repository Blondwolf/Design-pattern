#include "composite.h"

Composite::Composite()
{
}

Composite::~Composite()
{
    qDeleteAll(listChildren);
}

void Composite::draw(QPainter &gc)
{
    foreach(Component *c, listChildren)
    {
        c->draw(gc);
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

