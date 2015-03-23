#ifndef LINE_H
#define LINE_H


#include "component.h"

class Line : public Component
{
public:
    Line();
    ~Line();

    virtual void operation();
};

#endif // LINE_H
