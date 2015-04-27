#include "../component/fruit.h"

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

Fruit::Fruit()
{
    _isContainsPips = false;
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

/*============================================*/
//  GET / SET
/*============================================*/

QString Fruit::name() const
{
    return _name;
}

void Fruit::setName(QString name)
{
    _name = name;
}

void Fruit::setContainsPips(bool p)
{
    _isContainsPips = p;
}

QString Fruit::toString() const
{
    return _name + (_isContainsPips ? " - Avec pépin" : " - Sans Pépin");
}

Component *Fruit::clone() const
{
    return new Fruit(*this);
}
