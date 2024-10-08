/**
 * @file main.cpp
 * @author Maxime BOURCIEZ 
 * @brief R3.02 - TP2 -- Pointeurs
 * @version 1.0
 * @date 2024-09-16
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include "individu.h"
#include "voiture.h"
// + iostream dans un des .h

int main(){

    // VARIABLES 
    // Voitures
    Voiture voit1("RenaultClio", "123AB64");
    Voiture voit2("Peugeot106", "456EF75");
    Voiture voit3("CitroenPicasso", "456EF75");
    
    // Individus
    Individu ind1("Dupond", "Pierre");
    Individu ind2("Martin","Pierre");
    Individu ind3("Durand","Marcel");
    
    // TRAITEMENTS
    // Lier ind3 & voit3
    ind3.setVoiture(&voit3);
    cout << "Etape 1" << endl;

    cout << ind3.toStringAndLink() << endl; 
    cout << voit3.toStringAndLink() << endl << endl;
    
    // Lier la voit3 avec ind2
    voit3.setPilote(&ind2);

    cout << ind2.toStringAndLink() << endl;
    cout << ind3.toStringAndLink() << endl;
    cout << voit3.toStringAndLink() << endl << endl;

    // Détruire ind2 & vérifier si le lien est supprimé
    ind2.~Individu();
    voit3.~Voiture();
    cout << ind2.toStringAndLink() << endl;
    cout << voit3.toStringAndLink() << endl << endl;
    
    return 0;
}