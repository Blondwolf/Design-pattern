#include "composit/fruit.h"
#include "composit/fruitbag.h"
#include "decorator/decoratioetoile.h"
#include "decorator/decoratiosharp.h"
#include "decorator/decorationequals.h"
#include "commande/commande.h"
#include <QTextStream>

//=============================================
//  AFFICHAGE
//=============================================

void showTitle(const QString &s){
    QTextStream(stdout)<<""<<endl;
    QTextStream(stdout)<<""<<endl;
    QTextStream(stdout)<<"==================================="<<endl;
    QTextStream(stdout)<<s<<endl;
    QTextStream(stdout)<<"==================================="<<endl;
}

void showSubTitle(const QString &s){
    QTextStream(stdout)<<""<<endl;
    QTextStream(stdout)<<s<<endl;
    QTextStream(stdout)<<"-----------------------------------"<<endl;
    QTextStream(stdout)<<""<<endl;
}

void showEnd(){
    QTextStream(stdout)<<""<<endl;
    QTextStream(stdout)<<""<<endl;
    QTextStream(stdout)<<"C'est fini !";
    QTextStream(stdout)<<""<<endl;
    QTextStream(stdout)<<""<<endl;
}

void showInforamation(const QString &s){
    QTextStream(stdout)<<" - "<<s<<endl;
}

void showShiftedBloc(const QString &s){
    QStringList sl = s.split("\n");

    foreach(QString str, sl)
    {
        QTextStream(stdout)<<"     "<<str<<endl;
    }
    QTextStream(stdout)<<""<<endl;
}


void clearScreen(){

}

//=============================================
//  NAVIGATION
//=============================================

void mainMenu()
{
    clearScreen();
    showTitle("Menu principal");
    QString s;
    s.append(" ");
}

//=============================================
//  NAVIGATION
//=============================================



int main(int argc, char *argv[])
{
    showTitle("Etape 1 composit et fruit");

    showSubTitle("Instantiation des fruits");

    Fruit banane;
    Fruit orange;
    Fruit ananas;
    banane.setName("Banane");
    orange.setName("Orange");
    ananas.setName("Ananas");
    orange.setContainsPips(true);

    showInforamation("Creation d'une banane, d'une orange (avec pépin) et d'un ananas");

    showSubTitle("Création des paniers de fruits");

    FruitBag panierBanane;
    panierBanane.add(new Fruit(banane));
    panierBanane.add(new Fruit(banane));
    panierBanane.add(new Fruit(banane));
    showInforamation("Creation d'un panier de bananes");
    showInforamation(panierBanane.toString());

    FruitBag panierOrange;
    panierOrange.add(new Fruit(orange));
    panierOrange.add(new Fruit(orange));
    panierOrange.add(new Fruit(orange));
    showInforamation("Creation d'un panier d'orange");
    showInforamation(panierOrange.toString());

    FruitBag panierMixte;
    panierMixte.add(new Fruit(ananas));
    panierMixte.add(new Fruit(banane));
    panierMixte.add(new Fruit(orange));
    showInforamation("Creation d'un panier mixte");
    showInforamation(panierMixte.toString());

    FruitBag panierPanier;
    panierPanier.add(panierBanane.clone());
    panierPanier.add(panierOrange.clone());
    panierPanier.add(panierMixte.clone());
    showInforamation("Creation d'un panier avec tous les paniers");
    showInforamation(panierPanier.toString());

    showTitle("Etape 2 decoration");

    showSubTitle("Decoration sur une imbrication");

    DecoratioEtoile etoile(&banane);
    showShiftedBloc(etoile.showFruit());
    DecoratioSharp sharp(&panierPanier);
    showShiftedBloc(sharp.showFruit());

    showSubTitle("Decoration sur deux imbrication");

    DecoratioEquals eq1(&etoile);
    showShiftedBloc(eq1.showFruit());
    DecoratioEquals eq2(&sharp);
    showShiftedBloc(eq2.showFruit());

    showTitle("Etape 3 commande");

    Commande com;
    showInforamation("Creation commande");
    showInforamation("Appel de traitercommande(), retour de la fonction : "+ com.traiterCommande());
    showInforamation("Appel de traitercommande(), retour de la fonction : "+ com.traiterCommande());
    showInforamation("Appel de traitercommande(), retour de la fonction : "+ com.traiterCommande());
    showInforamation("Appel de traitercommande(), retour de la fonction : "+ com.traiterCommande());

    showEnd();

    return 0;
}
