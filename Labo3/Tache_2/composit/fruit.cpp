#include "fruit.h"

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

Fruit::Fruit(string &name, bool containPips)
{
    _isContainsPips = containPips;
    _name = name;
}

Fruit::~Fruit()
{

}

/*============================================*/
//  OVERRIDE
/*============================================*/

string Fruit::showFruit() const
{
    return _name;
}

bool Fruit::isContainsPips() const
{
    return _isContainsPips;
}

