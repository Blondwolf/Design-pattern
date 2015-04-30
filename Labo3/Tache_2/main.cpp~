#include "composit/fruit.h"
#include "composit/fruitbag.h"
#include "decorator/decorator.h"
#include "decorator/decoratioetoile.h"
#include "decorator/decoratiosharp.h"
#include "decorator/decorationequals.h"
#include <iostream>
#include <list>

using namespace std;

FruitBag *currentBag = 0;
list<FruitBag  *> listFruitBag;
Decorator *d = 0;

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
//  NAVIGATION
//=============================================

void addFruit()
{
    string name;
    bool containPips;
    cout<<"Entrez le nom : ";
    cin>>name;
    cout<<endl;

    cout<<"Contien des pepins ? (0 = non, 1 = oui)";
    cin>>containPips;
    cout<<endl;

    currentBag->add(new Fruit(name, containPips));
}

void createNewBag()
{
    listFruitBag.push_front(currentBag);
    currentBag = new FruitBag();
}

void mergeBag()
{
    for(list<FruitBag*>::const_iterator ci = listFruitBag.begin();
    ci != listFruitBag.end(); ++ci)
    {
    currentBag->add((*ci));
    }
}

void showStatus()
{
    cout<<"Nombre de panier a fusionner : "<<listFruitBag.size()<<endl;
    cout<<"Le panier acctuel contien des pépins ? : "<<currentBag->isContainsPips()<<" (0 = non, 1 = oui)"<<endl;
    cout<<endl<<(currentBag->showFruit())<<endl;
}

void showDecorated()
{
    if(d != 0)cout<<endl<<(d->showFruit())<<endl;
}

bool menuShow()
{
    clearScreen();
    showTitle("Menu affichage");
    showSubTitle("Panier actuel");
    showDecorated();
    showSubTitle("Options");

    cout<<"1) Affichage etoile"<<endl;
    cout<<"2) Affichage sharp"<<endl;
    cout<<"3) Affichage egale"<<endl;
    cout<<"0) retour"<<endl;

    cout<<endl<<"Option choisie : ";

    int option = 0;
    cin>>option;
    cout<<endl;

    if(d != 0)
    {
        delete d;
        d = 0;
    }

    switch(option)
    {
        case 1:
            d = new DecoratioEtoile(currentBag);
            break;
        case 2:
            d = new DecoratioSharp(currentBag);
            break;
        case 3:
            d = new DecoratioEquals(currentBag);
            break;
        case 0:
            return false;
        default:
            return false;

    }
    return true;
}

bool mainMenu()
{
    clearScreen();
    showTitle("Menu principal");
    showSubTitle("Panier actuel");
    showStatus();
    showSubTitle("Options");

    cout<<"1) Ajouter un fruit au panier courant"<<endl;
    cout<<"2) Crer un nouveau panier courent"<<endl;
    cout<<"3) Fusionner toute la liste des paniers au panier courent"<<endl;
    cout<<"4) Afficher la sortie décoree"<<endl;
    cout<<"0) Quiter"<<endl;

    cout<<endl<<"Option choisie : ";

    int option = 0;
    cin>>option;
    cout<<endl;

    switch(option)
    {
        case 1:
            addFruit();
            break;
        case 2:
            createNewBag();
            break;
        case 3:
            mergeBag();
            break;
        case 4:
            while(menuShow());
            break;
        case 0:
            return false;
        default:
            return false;

    }
    return true;
}

//=============================================
//  POINT D'ENTREE
//=============================================



int main(int argc, char *argv[])
{
    currentBag = new FruitBag();
    while(mainMenu());

    for(list<FruitBag*>::const_iterator ci = listFruitBag.begin();
        ci != listFruitBag.end(); ++ci)
    {
        delete(*ci);
    }
    delete currentBag;

    if(d != 0)delete d;

    return 0;
}
