#include "decoratioetoile.h"

DecoratioEtoile::DecoratioEtoile(Decorator *interne) : Decorator(interne)
{
}

DecoratioEtoile::~DecoratioEtoile()
{

}

QString DecoratioEtoile::showFruit() const
{
    QString source = interne->showFruit();

    QString s;
    s.append("************************************\n");
    s.append(source);
    s.append("\n************************************\n");

    return s;
}

