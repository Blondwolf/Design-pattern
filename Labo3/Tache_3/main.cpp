#include <iostream>
#include "commande/commande.h"
#include <list>

using namespace std;

//=============================================
//  DISPLAY
//=============================================

void showTitle(const string &s){
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"==================================="<<endl;
    cout<<s<<endl;
    cout<<"==================================="<<endl;
}

void showSubTitle(const string &s){
    cout<<""<<endl;
    cout<<s<<endl;
    cout<<"-----------------------------------"<<endl;
    cout<<""<<endl;
}

void showEnd(){
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"C'est fini !";
    cout<<""<<endl;
    cout<<""<<endl;
}

void clearScreen()
{
    for(int i = 0; i < 50; ++i)
    {
        cout<<endl;
    }
}

//=============================================
//  POINT D'ENTREE
//=============================================



int main(int argc, char *argv[])
{
    clearScreen();
    showTitle("Partie 3");

    Commande com;
    cout<<"Creation de la commande"<<endl;
    cout<<"Appel de traitercommande(), retour de la fonction : "+ com.traiterCommande()<<endl;
    cout<<"Appel de traitercommande(), retour de la fonction : "+ com.traiterCommande()<<endl;
    cout<<"Appel de traitercommande(), retour de la fonction : "+ com.traiterCommande()<<endl;
    cout<<"Appel de traitercommande(), retour de la fonction : "+ com.traiterCommande()<<endl;

    return 0;
}
