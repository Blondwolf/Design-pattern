#include "decoratioetoile.h"

DecoratioEtoile::DecoratioEtoile(Decorator *interne) : Decorator(interne)
{
}

DecoratioEtoile::~DecoratioEtoile()
{

}

string DecoratioEtoile::showFruit() const
{
    string source = interne->showFruit();

    string s;
    s.append("************************************\n");
    s.append(source);
    s.append("\n************************************\n");

    return s;
}

