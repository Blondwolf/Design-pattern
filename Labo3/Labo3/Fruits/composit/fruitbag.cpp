#include "component/fruitbag.h"
#include "fruit.h"

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

FruitBag::FruitBag()
{
}

FruitBag::~FruitBag()
{
    qDeleteAll(listChildren);
}

/*============================================*/
//  OVERRIDE
/*============================================*/

QString FruitBag::showFruit() const
{
    QString s("Panier[");
    foreach(Component *c, listChildren)
    {
        s.append(" ");
        s.append(c->showFruit());
        s.append(",");
    }
    s.remove(s.length()-1, 1);
    s.append("]");
    return s;
}

bool FruitBag::isContainsPips() const
{
    foreach(Component *c, listChildren)
    {
        if(c->isContainsPips()) return true;
    }
    return false;
}

/*============================================*/
//  GET / SET
/*============================================*/

void FruitBag::add(Component *c)
{
    listChildren.append(c);
}

void FruitBag::remove(Component *c)
{
    if(listChildren.contains(c))
    {
        listChildren.removeAt(listChildren.indexOf(c));
        delete c;
    }
}

const QList<Component*> *FruitBag::getChildren() const
{
    return &listChildren;
}
