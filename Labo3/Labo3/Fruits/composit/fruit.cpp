#include "fruit.h"

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

Fruit::Fruit(QString &name, bool containPips)
{
    _isContainsPips = false;
    _name = name;
}

Fruit::~Fruit()
{

}

/*============================================*/
//  OVERRIDE
/*============================================*/

QString Fruit::showFruit() const
{
    return _name;
}

bool Fruit::isContainsPips() const
{
    return _isContainsPips;
}

