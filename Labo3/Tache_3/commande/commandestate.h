#ifndef COMMANDESTATE_H
#define COMMANDESTATE_H


class CommandeState
{
public:
    CommandeState();
    ~CommandeState();

protected:
    virtual void abstract() = 0;
};

#endif // COMMANDESTATE_H
