#include "individu.h"
#include "voiture.h"

// CONSTRUCTEUR -- DESTRUCTEUR
Individu::Individu(std::string pNom, std::string pPrenom, Voiture* pVoiture):
    _nom(pNom),
    _prenom(pPrenom),
    _maVoiture(pVoiture){
    }


Individu::~Individu(){
    supprimerLien(); // On supprime le lien avec la voiture
}


// ENCAPSULATION
// Getters
std::string Individu::getNom() const{
    return _nom;
}

std::string Individu::getPrenom() const{
    return _prenom;
}

Voiture* Individu::getVoiture() const{
    return _maVoiture;
}


// Setters
void Individu::setNom(std::string pNom){
    _nom = pNom;
}

void Individu::setPrenom(std::string pPrenom){
    _prenom = pPrenom;
}

void Individu::setVoiture(Voiture* pVoiture){
     supprimerLien(); 

    if (pVoiture != nullptr) {
        cout << "Test 1" << endl;
        pVoiture->supprimerLien (); 
        cout << "Test 2" << endl;
        _maVoiture->MajMonPilote(this);
        cout << "Test 3" << endl;
        MajMaVoiture(pVoiture);
        cout << "Test 4" << endl;
    }
}


// METHODES SPECIFIQUES
void Individu::MajMaVoiture(Voiture* pVoiture){
    _maVoiture = pVoiture;
}

// METHODES USUELLES
std::string Individu::toString(){
    return _prenom + " " + _nom;
}

std::string Individu::toStringAndLink(){
    if(_maVoiture == nullptr){
        return _prenom + " " + _nom + " n'a pas de voiture";
    }
    return _prenom + " " + _nom + " possede la voiture " + _maVoiture->toString();
}

void Individu::supprimerLien(){
    if(_maVoiture!= nullptr){
        _maVoiture->MajMonPilote(nullptr);
        _maVoiture = nullptr;
    }
}