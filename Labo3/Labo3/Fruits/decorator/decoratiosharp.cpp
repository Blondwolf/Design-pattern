#include "decoratiosharp.h"

DecoratioSharp::DecoratioSharp(Decorator *interne) : Decorator(interne)
{
}

DecoratioSharp::~DecoratioSharp()
{

}

QString DecoratioSharp::showFruit() const
{
    QString s;
    s.append("########################################\n");
    s.append(interne->showFruit());
    s.append("\n#######################################\n");
    return s;
}

