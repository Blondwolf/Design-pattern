#ifndef LINE_H
#define LINE_H

#include "component.h"

class Fruit : public Component
{
public:
    Fruit(string &name, bool containPips);
    virtual ~Fruit();

    virtual string showFruit() const;
    virtual bool isContainsPips() const;

private:
    string _name;
    bool _isContainsPips;
};

#endif // LINE_H
