#include "decoratioetoile.h"

DecoratioEtoile::DecoratioEtoile(Decorator *interne) : Decorator(interne)
{
}

DecoratioEtoile::~DecoratioEtoile()
{

}

QString DecoratioEtoile::showFruit() const
{
    QString s;
    s.append("************************************\n");
    s.append(interne->showFruit());
    s.append("\n************************************\n");
    return s;
}

