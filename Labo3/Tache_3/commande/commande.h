#ifndef COMMANDE_H
#define COMMANDE_H

#include <iostream>

using namespace std;

class CommandeState;

class Commande
{
public:
    Commande();
    ~Commande();

    string traiterCommande();

private:
    CommandeState *state;
};

#endif // COMMANDE_H
