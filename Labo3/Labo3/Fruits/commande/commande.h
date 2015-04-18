#ifndef COMMANDE_H
#define COMMANDE_H

#include <QString>

class CommandeState;

class Commande
{
public:
    Commande();
    ~Commande();

    QString traiterCommande();

private:
    CommandeState *state;
};

#endif // COMMANDE_H
