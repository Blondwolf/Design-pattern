#ifndef RECTANGLEAPI1_H
#define RECTANGLEAPI1_H

#include "Rectangle.h"

class RectangleAPI1 : public Rectangle
{
    public:
        RectangleAPI1();
        virtual ~RectangleAPI1();
    protected:
        void paint();
    private:
};

#endif // RECTANGLEAPI1_H
