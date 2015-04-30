#include "decoratiosharp.h"

DecoratioSharp::DecoratioSharp(Decorator *interne) : Decorator(interne)
{
}

DecoratioSharp::~DecoratioSharp()
{

}

string DecoratioSharp::showFruit() const
{
    string s;
    s.append("########################################\n");
    s.append(interne->showFruit());
    s.append("\n#######################################\n");
    return s;
}

