#include "voiture.h"
#include "individu.h"
#include <iostream>
using namespace std;

Voiture::Voiture(string marque, string plaque, Individu* pilote):
    _marque(marque),
    _plaque(plaque),
    _monPilote(pilote){
}

// METHODES SPECIFIQUES
void Voiture::MajMonPilote(Individu* pIndividu){
    _monPilote = pIndividu;
}


// ENCAPSULATION
void Voiture::setPilote(Individu* val){
    supprimerLien(); 
    // _monPilote = new Individu();
    _monPilote = val;
}


// METHODES USUELLES
string Voiture::toString() {
    return "Marque " + getMarque() + " plaque " + getPlaque();
}

string Voiture::toStringAndLink() {
    if(_monPilote == nullptr){
        return "Voiture " + getMarque() + " n'a pas de pilote";
    }
    return "Voiture " + getMarque() + " est conduite par " + _monPilote->toString();
}

void Voiture::supprimerLien(){
    _monPilote = nullptr;
}