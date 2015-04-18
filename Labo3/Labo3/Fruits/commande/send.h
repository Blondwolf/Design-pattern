#ifndef SEND_H
#define SEND_H

#include "commandestate.h"

class Send : public CommandeState
{
public:
    Send();
    ~Send();

protected:
    virtual void abstract();
};

#endif // SEND_H
