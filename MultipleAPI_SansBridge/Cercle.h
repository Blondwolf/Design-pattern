#ifndef CERCLE_H
#define CERCLE_H

#include "Forme.h"

class Cercle : public Forme
{
    public:
        Cercle();
        virtual ~Cercle();
    protected:
        virtual void paint();
    private:
};

#endif // CERCLE_H
