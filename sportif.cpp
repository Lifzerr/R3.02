#include "sportif.h"

Sportif::Sportif(string nom, string prenom, short int anneeNaiss)
    : _nom(nom)
    , _prenom(prenom)
    , _anneeNaissance(anneeNaiss)
{
}
/*
Sportif::Sportif(const Sportif& orig):
    _nom(orig.getNom()),
    _prenom(orig.getPrenom()),
    _anneeNaissance(orig.getAnneeNaissance()){
}

Sportif::~Sportif() {}
*/
// Méthodes usuelles
string Sportif::toString() const{
    return _prenom + " " + _nom;
}

// Méthodes spécifiques
short int Sportif::getAge(){
    return static_cast<short int>(Outils::anneeActuelle() - getAnneeNaissance());
}