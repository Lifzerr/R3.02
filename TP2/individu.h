#ifndef INDIVIDU_H
#define INDIVIDU_H


#include <iostream>

class Voiture;


class Individu{
    private:
        // ATTRIBUTS
        std::string _nom; // Nom de l'individu
        std::string _prenom; // Prénom de l'individu
        Voiture* _maVoiture; // Pointeur vers la voiture de l'individu

    public :
        // CONSTRUCTEUR -- DESTRUCTEUR	 
        Individu(std::string nom="", std::string prenom="", Voiture* voiture=nullptr);
        ~Individu(); 

        // ENCAPSULATION
        std::string getNom() const; 
        std::string getPrenom() const;
        Voiture* getVoiture() const;

        void setNom(std::string pNom="");
        void setPrenom(std::string pPrenom="");
        void setVoiture(Voiture* pVoiture=nullptr);

        // METHODES SPECIFIQUES -non- 
        void MajMaVoiture(Voiture* pVoiture=nullptr);

        // METHODES USUELLES
        std::string toString();
        std::string toStringAndLink();
        void supprimerLien();
};


#endif