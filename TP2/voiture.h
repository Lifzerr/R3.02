#ifndef VOITURE_H
#define VOITURE_H

#include <iostream>
using namespace std;

class Individu;

class Voiture{

    //ATTRIBUTS
    private: 
        string _marque; // Marque de la voiture
        string _plaque; // Plaque d'immatriculation
        Individu* _monPilote; // Pointeur vers l'individu qui conduit la voiture
        
    public:
        //CONSTRUCTEUR
        Voiture(string marque="", string plaque="", Individu* pilote=nullptr);

        // ENCAPSULATION
        void setMarque(string val) {_marque = val;};
        void setPlaque(string val) {_plaque = val;};
        void setPilote(Individu* val);

        string getMarque() {return _marque;};
        string getPlaque() {return _plaque;};      
        Individu* getPilote() {return _monPilote;};

        // METHODES SPECIFIQUES 
        void MajMonPilote(Individu* pIndividu=nullptr);

        //METHODES USUELLES
        string toString();
        string toStringAndLink();
        void supprimerLien();
};

#endif