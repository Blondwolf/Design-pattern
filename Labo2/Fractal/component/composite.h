#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "component.h"
#include <QList>

class Composite : public Component
{
public:
    Composite();
    virtual ~Composite();

    virtual void draw(QPainter &gc) Q_DECL_OVERRIDE;

    virtual void add(Component *c);
    virtual void remove(Component *c);
    virtual QList<Component *> *getChildren();

private:
    QList<Component*> listChildren;
};

#endif // COMPOSITE_H
