#include "decorator.h"

Decorator::Decorator(Decorator *interne)
{
    this->interne = interne;
}

Decorator::~Decorator()
{

}

