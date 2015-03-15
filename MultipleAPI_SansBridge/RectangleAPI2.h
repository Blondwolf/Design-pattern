#ifndef RECTANGLEAPI2_H
#define RECTANGLEAPI2_H

#include "Rectangle.h"

class RectangleAPI2 : public Rectangle
{
    public:
        RectangleAPI2();
        virtual ~RectangleAPI2();
    protected:
        void paint();
    private:
};

#endif // RECTANGLEAPI2_H
