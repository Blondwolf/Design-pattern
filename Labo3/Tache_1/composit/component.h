#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

using namespace std;

class Component
{
public:
    Component();
    virtual ~Component();

    virtual string showFruit() const = 0;
    virtual bool isContainsPips()const = 0;
};

#endif // COMPONENT_H
