#ifndef PAIED_H
#define PAIED_H

#include "commandestate.h"

class Paied : public CommandeState
{
public:
    Paied();
    ~Paied();

protected:
    virtual void abstract();
};

#endif // PAIED_H
