#include "sportifMenteur.h"

SportifMenteur::SportifMenteur(string tuteur, Sportif sportif):
    _tuteur(tuteur),
    Sportif(sportif){
    }

SportifMenteur::~SportifMenteur(){}

string SportifMenteur::toString() const{
    return "Tuteur : " + _tuteur + "  -  ";
}

short int SportifMenteur::getAge() const{
    short int age = static_cast<short int>(Outils::anneeActuelle() - this->getAnneeNaissance());
    cout << "Age : " << age << endl;

    return age < 18 ? 18 : age;
}