#ifndef COMPONENT_H
#define COMPONENT_H

class QPainter;

class Component
{
public:
    Component();
    virtual ~Component();

    virtual void draw(QPainter &gc) = 0;
};

#endif // COMPONENT_H
