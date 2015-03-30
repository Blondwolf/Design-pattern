#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

using namespace std;

class QPainter;

class Component
{
public:
    Component();
    virtual ~Component();

    virtual string showFruit() = 0;
    virtual bool isContainsPips() = 0;
};

#endif // COMPONENT_H
