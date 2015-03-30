#ifndef LINE_H
#define LINE_H

#include "../component/component.h"

class Line : public Component
{
public:
    Line();
    virtual ~Line();

    virtual string showFruit();
    virtual bool isContainsPips();

    virtual string name() const;
    virtual void setName(string name);

private:
    string _name;
    bool _isContainsPips;
};

#endif // LINE_H
