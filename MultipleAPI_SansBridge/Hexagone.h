#ifndef HEXAGONE_H
#define HEXAGONE_H

#include "Forme.h"

class Hexagone : public Forme
{
    public:
        Hexagone();
        virtual ~Hexagone();
    protected:
        virtual void paint();
    private:
};

#endif // HEXAGONE_H
