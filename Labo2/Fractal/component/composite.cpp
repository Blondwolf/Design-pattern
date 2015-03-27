#include "composite.h"
#include "line.h"

Composite::Composite()
{
}

Composite::~Composite()
{
    qDeleteAll(listChildren);
}

void Composite::draw(QPainter &gc)
{
    foreach(Component *c, listChildren)
    {
        c->draw(gc);
    }
}

void Composite::doNextStep()
{
    QMutableListIterator<Component *> i(listChildren);

    while (i.hasNext())
    {
        Component *c = i.next();
        Line *l = dynamic_cast<Line *>(c);
        if(l != 0)
        {
            //Creation of line

            //Fractalize the line^^
            Composite *newComp = new Composite();

            //Affecte new value
            i.setValue(newComp);
            delete c;
        }

    }
}

void Composite::add(Component *c)
{
    listChildren.append(c);
}

void Composite::remove(Component *c)
{
    if(listChildren.contains(c))
    {
        listChildren.removeAt(listChildren.indexOf(c));
        delete c;
    }
}

QList<Component*> Composite::getChildren() const
{
    return listChildren;
}

