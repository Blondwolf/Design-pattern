#ifndef WAITING_H
#define WAITING_H

#include "commandestate.h"

class Waiting : public CommandeState
{
public:
    Waiting();
    ~Waiting();

protected:
    virtual void abstract();
};

#endif // WAITING_H
