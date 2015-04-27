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
    QString s;
    foreach(Component *c, listChildren)
    {
        s.append(" ");
        s.append(c->showFruit());
        s.append(",");
    }
    s.remove(s.length()-1, 1);
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

QList<Component*> *FruitBag::getChildren()
{
    return &listChildren;
}

QString FruitBag::toString() const
{
    QString s;
    s.append("Panier [");
    s.append(showFruit());
    s.append("]");
    return s;
}

Component *FruitBag::clone() const
{
    FruitBag *f = new FruitBag();
    foreach(Component *c, listChildren)
    {
        f->add(c->clone());
    }
    return f;
}

