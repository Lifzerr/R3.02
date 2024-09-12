#include <iostream>
using namespace std;
#include "outils.h"
#include "sportifMenteur.h"

// Sous-programmes
void afficheAgeSportifParValeur (Sportif sportif);
void afficheAgeSportifParReference (Sportif& sportif);
void afficheAgeSportifParAdresse (Sportif* sportif);



int main(void)
{
    // VARIABLES
    Sportif sportif1( "Clemenceau", "Edouard", 2007);
    SportifMenteur sportif2("Patrick Etcheverry", Sportif("Berho", "Andoni",2000));
    SportifMenteur sportif3("Yann Carpentier", Sportif("Barlic", "François", 2010)); 

    // TRAITEMENTS
    cout << "Annee actuelle : " << Outils::anneeActuelle() << endl;
    cout << "Sportif 1 - Annee de naissance : " << sportif1.getAnneeNaissance() << " - Age : " << sportif1.getAge() << endl;
    cout << "Sportif 2 - Annee de naissance : " << sportif2.getAnneeNaissance() << " - Age : " << sportif2.getAge() << endl;
    cout << "Sportif 3 - Annee de naissance : " << sportif3.getAnneeNaissance() << " - Age : " << sportif3.getAge() << endl;

    cout << endl << endl << endl;

    afficheAgeSportifParValeur (sportif1);
    afficheAgeSportifParReference (sportif1);
    afficheAgeSportifParAdresse (&sportif1);

    cout << endl << endl << endl;

    afficheAgeSportifParValeur (sportif2);
    afficheAgeSportifParReference (sportif2);
    afficheAgeSportifParAdresse (&sportif2);

    cout << endl << endl << endl;

    afficheAgeSportifParValeur (sportif3);
    afficheAgeSportifParReference (sportif3);
    afficheAgeSportifParAdresse (&sportif3);

    cout << endl << endl << endl;

    return 0;
}


void afficheAgeSportifParValeur (Sportif sportif){
    cout << "Annee actuelle : " << Outils::anneeActuelle() 
    << " --  " << sportif.toString() 
    << "Annee de naissance : " << sportif.getAnneeNaissance() 
    << " - Age : " << sportif.getAge() << endl;
}
void afficheAgeSportifParReference (Sportif& sportif){
    cout << "Annee actuelle : " << Outils::anneeActuelle() 
    << " --  " << sportif.toString() 
    << "Annee de naissance : " << sportif.getAnneeNaissance() 
    << " - Age : " << sportif.getAge() << endl;
}
void afficheAgeSportifParAdresse (Sportif* sportif){
    cout << "Annee actuelle : " << Outils::anneeActuelle() 
    << " --  " << sportif->toString() 
    << "Annee de naissance : " << sportif->getAnneeNaissance() 
    << " - Age : " << sportif->getAge() << endl;
}