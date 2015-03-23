#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class APIs_implementor;

class Circle : public Shape
{
    public:
        Circle(APIs_implementor &api);
        virtual ~Circle();
        virtual void draw();

        void setR(int r);

        int getR() const;

    private:
        int r;
};

#endif // CIRCLE_H
