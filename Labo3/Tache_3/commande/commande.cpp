#include "commande.h"
#include "commandestate.h"
#include "waiting.h"
#include "paied.h"
#include "send.h"

Commande::Commande()
{
    state = new Waiting();
}

Commande::~Commande()
{

}

string Commande::traiterCommande()
{
    if(dynamic_cast<Waiting*>( state ) != 0)
    {
        delete state;
        state = new Paied();
    }
    else if(dynamic_cast<Paied*>( state ) != 0)
    {
        delete state;
        state = new Send();
        return "Commande traitée et envoyée";
    }
    else if(dynamic_cast<Send*>( state ) != 0)
    {
        return "Commande envoyée";
    }
    return "";
}

