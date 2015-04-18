#ifndef LINE_H
#define LINE_H

#include "component.h"

class Fruit : public Component
{
public:
    Fruit();
    virtual ~Fruit();

    virtual QString showFruit() const;
    virtual bool isContainsPips() const;

    virtual QString name() const;
    virtual void setName(QString name);

    virtual void setContainsPips(bool p);

    virtual QString toString() const;
    Component *clone() const;
private:
    QString _name;
    bool _isContainsPips;
};

#endif // LINE_H
