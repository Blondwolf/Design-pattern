#ifndef EXAGON_H
#define EXAGON_H

#include "shape.h"

class APIs_implementor;

class Hexagon : public Shape
{
    public:
        Hexagon(APIs_implementor &api);
        virtual ~Hexagon();
        virtual void draw();

        void setA(int a);
        void setR(int r);

        int getA() const;
        int getR() const;

    private:
        int r;
        int a;
};

#endif // EXAGON_H
