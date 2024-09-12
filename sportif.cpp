#include "sportif.h"

Sportif::Sportif(string nom, string prenom, short int anneeNaiss)
    : _nom(nom)
    , _prenom(prenom)
    , _anneeNaissance(anneeNaiss)
{
}

Sportif::~Sportif() {}

// Méthodes usuelles
string Sportif::toString() const{
    return _prenom + " " + _nom;
}

// Méthodes spécifiques
short int Sportif::getAge() const{
    return static_cast<short int>(Outils::anneeActuelle() - getAnneeNaissance());
}