/**
 * @file main.cpp
 * @author Maxime BOURCIEZ
 * @brief TP3 R3.02 - Initiation aux conteneurs
 * @version 0.1
 * @date 2024-09-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include <list>
#include <utility> // Pour list
#include <string>
#include <iostream>
#include <iterator>
#include <map>
using namespace std;

// Sous-programmes
// Q2 -liste de string
void listeSimple(); // But : Créer une iste et itérer dedans
// Q7 - liste de pair
void listePaires(); // But : Créer une liste de paires et itérer dedans
// Q11 - map
void leMap(); // But : Créer une map et itérer dedans


int main() {

    listeSimple();

    cout << endl << endl;

    listePaires();

    cout << endl << endl;

    leMap();

    return 0;
}


void listeSimple(){
    // Création de la liste
    typedef list<string> ListeS;
    ListeS uneListeS;

    // Remplir la liste
    uneListeS.push_back("Pantxika");
    uneListeS.push_back("Yann");
    uneListeS.push_back("Philippe");
    uneListeS.push_back("Patrick");

    // Créer un itérateur
    ListeS::iterator iterateurListeS;

    // Initialiser l'itérateur au début de la liste
    iterateurListeS = uneListeS.begin();

    // Affiche chaque élément de la liste
    while(iterateurListeS != uneListeS.end()){
        cout << *iterateurListeS << endl;
        iterateurListeS++;
    }
}


void listePaires(){
    // Créer la liste
    typedef pair<string, string> pairS;
    typedef list<pairS> ListeP;
    ListeP maListeP;

    // Créer et remplir les paires
    pair<string, string> unePaire1("Pantxika", "06.01.01.01.01"); 
    pair<string, string> unePaire2("Yann", "06.02.02.02.02");
    pair<string, string> unePaire3("Philippe", "06.03.03.03.03");
    pair<string, string> unePaire4("Patrick", "06.04.04.04.04");

    // Remplir la liste
    maListeP.push_back(unePaire1);
    maListeP.push_back(unePaire2);
    maListeP.push_back(unePaire3);
    maListeP.push_back(unePaire4);

    // Créer un itérateur
    ListeP::iterator iterateurListeP;

    // Itérer
    iterateurListeP = maListeP.begin();
    while(iterateurListeP != maListeP.end()){
        cout << iterateurListeP->first << " : " << iterateurListeP->second << endl;
        iterateurListeP++;
    }
}


void leMap(){
    // Créer la map
    typedef map<string, string> Annuaire;
    Annuaire unAnnuaire;
    pair<string, string> resultatInsert;

    // Remplir la map
    try{
        unAnnuaire["Pantxika"] = "06.01.01.01.01";
        unAnnuaire["Yann"] = "06.02.02.02.02";
        unAnnuaire["Philippe"] = "06.03.03.03.03";
        unAnnuaire["Patrick"] = "06.04.04.04.04";
        cout << "Insertion BIEN réalisee" << endl;
    }
    catch(exception& e){
        cout << "Insertion MAL réalisee" << endl;
    }

    // Créer et initialiser l'itérateur
    Annuaire::iterator iterateurAnnuaire;
    iterateurAnnuaire = unAnnuaire.begin();

    // Parcourir la map
    while(iterateurAnnuaire != unAnnuaire.end()){
        cout << iterateurAnnuaire->first << " : " << iterateurAnnuaire->second << endl;
        iterateurAnnuaire++;
    }

    cout << endl << endl;

    // Placer l'itérateur sur l'élement de clé "Philippe"
    iterateurAnnuaire = unAnnuaire.find("Philippe");

    if(iterateurAnnuaire->second != ""){
        cout << "Le numéro de Philippe est : " << iterateurAnnuaire->second << endl;
    }
    else{
        cout << "Philippe n'est pas dans l'annuaire" << endl;

    }
    
}
