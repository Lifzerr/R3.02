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
<<<<<<< HEAD
supprimerLien();

    if(val != nullptr){
        val->supprimerLien();
        _monPilote->MajMaVoiture(this);
        MajMonPilote(val);
    } 
=======
    if(_monPilote != nullptr){
        _monPilote->supprimerLien();
        supprimerLien();
    }
    // Recréer le lien
    _monPilote = val;
    _monPilote->MajMaVoiture(this);
>>>>>>> 2b610300a388b5e7550d9eead1e7bffb1152b86e
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
<<<<<<< HEAD
    if(_monPilote != nullptr){
        _monPilote = nullptr;
        _monPilote->MajMaVoiture(nullptr);
=======
    if(_monPilote != nullptr)
    {
        _monPilote = nullptr;
>>>>>>> 2b610300a388b5e7550d9eead1e7bffb1152b86e
    }
}