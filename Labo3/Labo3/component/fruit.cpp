#include "../component/fruit.h"

/*============================================*/
//  CONSTRUCTOR / DESTRUCTOR
/*============================================*/

Line::Line()
{

}

Line::~Line()
{

}

/*============================================*/
//  OVERRIDE
/*============================================*/

string Line::showFruit()
{
    return _name;
}

bool Line::isContainsPips()
{
    return _isContainsPips;
}

/*============================================*/
//  GET / SET
/*============================================*/

string Line::name() const
{
    return _name;
}

void Line::setName(string name)
{
    _name = name;
}
