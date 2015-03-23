#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <QList>

class Composite : public Component
{
public:
    Composite();
    ~Composite();

    virtual void operation();
    virtual void add(Component *c);
    virtual void remove(Component *c);
    virtual const QList<Component *> getChildren() const;

private:
    QList<Component*> listChildren;
};

#endif // COMPOSITE_H
