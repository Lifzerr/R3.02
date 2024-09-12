#ifndef OUTILS_H
#define OUTILS_H

#include <iostream>
using namespace std;
#include <time.h>

class Outils{
    // Public 
    // METHODE SPECIFIQUE
    /// Retourner l'année actuelle
    public:
        static short int anneeActuelle(){
            time_t timer;
            struct tm *newTime;

            // Demande l'heure
            time(&timer);
            newTime = localtime(&timer);
            return static_cast<short int>(newTime->tm_year + 1900);
        }
};


#endif