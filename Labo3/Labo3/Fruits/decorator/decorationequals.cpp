#include "decorationequals.h"

DecoratioEquals::DecoratioEquals(Decorator *interne) : Decorator(interne)
{
}

DecoratioEquals::~DecoratioEquals()
{

}

QString DecoratioEquals::showFruit() const
{
    QString s;
    s.append("=========================================\n");
    s.append(interne->showFruit());
    s.append("\n=========================================\n");
    return s;
}

