#ifndef SPORTIFMENTEUR_H
#define SPORTIFMENTEUR_H

#include <iostream>
#include "sportif.h"
using namespace std;

class SportifMenteur : public Sportif{

    private:
        //ATTRIBUTS
        string _tuteur; //Nom du tuteur

    public:
        //CONSTRUCTEUR - DESTRUCTEUR
        SportifMenteur(string tuteur="", Sportif sportif=Sportif());
        ~SportifMenteur();

        // ENCPASULATION
        string getTuteur() const {return _tuteur;};
        void setTuteur(string pTuteur=""){_tuteur=pTuteur;};

        //METHODES USUELLES
        string toString() const;

        //METHODES SPECIFIQUES
        virtual short int getAge() const; //retourne l'age

    
};



#endif