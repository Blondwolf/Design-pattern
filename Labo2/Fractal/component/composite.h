#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <QList>

class Composite : public Component
{
public:
    Composite();
    ~Composite();

    virtual void draw(QPainter &gc);
    virtual void doNextStep();

    virtual void add(Component *c);
    virtual void remove(Component *c);
    virtual QList<Component *> getChildren() const;

private:
    QList<Component*> listChildren;
};

#endif // COMPOSITE_H
