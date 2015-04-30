#ifndef LINE_H
#define LINE_H

#include "component.h"

class Fruit : public Component
{
public:
    Fruit(QString &name, bool containPips);
    virtual ~Fruit();

    virtual QString showFruit() const;
    virtual bool isContainsPips() const;

private:
    QString _name;
    bool _isContainsPips;
};

#endif // LINE_H
