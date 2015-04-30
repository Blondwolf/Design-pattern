#include "decorationequals.h"

DecoratioEquals::DecoratioEquals(Decorator *interne) : Decorator(interne)
{
}

DecoratioEquals::~DecoratioEquals()
{

}

string DecoratioEquals::showFruit() const
{
    string s;
    s.append("=========================================\n");
    s.append(interne->showFruit());
    s.append("\n=========================================\n");
    return s;
}

