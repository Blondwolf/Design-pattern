#include "component/fruitbag.h"

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

Composite::Composite()
{
}

Composite::~Composite()
{
    qDeleteAll(listChildren);
}

/*============================================*/
//  OVERRIDE
/*============================================*/

void Composite::draw(QPainter &gc)
{
    foreach(Component *c, listChildren)
    {
        c->draw(gc);
    }
}

/*============================================*/
//  GET / SET
/*============================================*/

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

QList<Component*> *Composite::getChildren()
{
    return &listChildren;
}

