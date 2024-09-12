#include "sportifMenteur.h"
/*
SportifMenteur::SportifMenteur(string tuteur, Sportif sportif):
    _tuteur(tuteur),
    Sportif(sportif){
    }*/

SportifMenteur::SportifMenteur(string nom, string prenom, short int age, string tuteur):
    
    Sportif(nom, prenom, age),
    _tuteur(tuteur){}

//SportifMenteur::~SportifMenteur(){}

string SportifMenteur::toString() const{
    return "Tuteur : " + _tuteur + "  -  ";
}

short int SportifMenteur::getAge(){
    short int age = static_cast<short int>(Outils::anneeActuelle() - this->getAnneeNaissance());
    return age < 18 ? 18 : age;
}