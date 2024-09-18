#include "voiture.h"
#include "individu.h"
#include <iostream>
using namespace std;


// CONSTRUCTEUR -- DESTRUCTEUR
Voiture::Voiture(string marque, string plaque, Individu* pilote):
    _marque(marque),
    _plaque(plaque),
    _monPilote(pilote){
}

Voiture::~Voiture(){
    supprimerLien(); // On supprime le lien avec le pilote
}

// METHODES SPECIFIQUES
void Voiture::MajMonPilote(Individu* pIndividu){
    _monPilote = pIndividu;
}


// ENCAPSULATION
void Voiture::setPilote(Individu* val){
    if(_monPilote != nullptr){
        _monPilote->supprimerLien(); 
    }
    supprimerLien(); 
    // _monPilote = new Individu();
    _monPilote = val;
    _monPilote->setVoiture(this);
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