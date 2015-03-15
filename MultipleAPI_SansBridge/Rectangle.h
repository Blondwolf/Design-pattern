#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Forme.h"

class Rectangle : public Forme
{
    public:
        Rectangle();
        virtual ~Rectangle();
    protected:
        virtual void paint();
    private:
};

#endif // RECTANGLE_H
