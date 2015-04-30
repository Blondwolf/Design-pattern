#include "fruitbag.h"
#include "fruit.h"

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

FruitBag::FruitBag()
{
}

FruitBag::~FruitBag()
{
    //TODO DELETE LIST
}

/*============================================*/
//  OVERRIDE
/*============================================*/

string FruitBag::showFruit() const
{
    string s("Panier[");
    for(list<Component*>::const_iterator ci = listChildren.begin();
    ci != listChildren.end(); ++ci)
    {
        s.append(" ");
        s.append((*ci)->showFruit());
        s.append(",");
    }
    if(listChildren.size() > 0) s.resize(s.length()-1);
    s.append("]");
    return s;
}

bool FruitBag::isContainsPips() const
{
    for(list<Component*>::const_iterator ci = listChildren.begin();
    ci != listChildren.end(); ++ci)
    {
        if((*ci)->isContainsPips()) return true;
    }
    return false;
}

/*============================================*/
//  GET / SET
/*============================================*/

void FruitBag::add(Component *c)
{
    listChildren.push_front(c);
}

void FruitBag::remove(Component *c)
{
    for(list<Component*>::const_iterator ci = listChildren.begin();
    ci != listChildren.end(); ++ci)
    {
        if((*ci) == c)
        {
            listChildren.remove(c);
            delete c;
        }
    }
}

const list<Component*> *FruitBag::getChildren() const
{
    return &listChildren;
}
