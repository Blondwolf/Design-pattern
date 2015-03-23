#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class APIs_implementor;

class Rectangle : public Shape
{
    public:
        Rectangle(APIs_implementor &api);
        virtual ~Rectangle();
        virtual void draw();

        void setH(int h);
        void setW(int w);
        void setA(int a);

        int getH() const;
        int getW() const;
        int getA() const;

    private:
        int h;
        int w;
        int a;
};

#endif // RECTANGLE_H
