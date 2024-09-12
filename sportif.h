#ifndef SPORTIF_H
#define SPORTIF_H

#include <iostream>
using namespace std;

// Fichiers
#include "outils.h"


class Sportif{
    private :
        // Attributs 
        string _nom; // nom du sportif
        string _prenom; // Prénom du sportif
        short int _anneeNaissance; // Année de naissance du sportif

    public:
        // Constructeur - Destructeur
        Sportif(string nom="", string prenom="", short int anneeNaiss = 0);
        // Sportif(const Sportif& orig);
        // ~Sportif();

        // Encapsulation ~ getters & setters
        string getNom() const {return _nom;};
        string getPrenom() const {return _prenom;};
        short int getAnneeNaissance() const {return _anneeNaissance;};

        void setNom(string nom="") {_nom = nom;};
        void setPrenom(string prenom=""){_prenom = prenom;};
        void setAnneeNaissance(short int anneeNaiss=0){_anneeNaissance = anneeNaiss;};

        // Méthodes usuelles 
        string toString() const; /* Afficher en chaine les infos du sportif */

        // Méthodes spécifiques
        virtual short int getAge(); /* But : Retourne l'age du sportif  */
};



#endif