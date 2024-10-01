#ifndef PAIR_H
#define PAIR_H

#include <iostream>
using namespace std;

template<class T1, class T2>
class pair{

    public:
        // Attributs
        typedef T1 first_type;
        typedef T2 second_type;

        // Constructeurs
        pair(const first_type&, const second_type&):
            first(pFirst),
            second(pSecond){
        }
};


#endif // PAIR_H