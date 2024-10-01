#ifndef MAP_H
#define MAP_H

#include <iostream>
using namespace std;

template<class Key, class T, class Cmp=less<Key>, class A=allocator<T>>
class map{
    public : 
    // Attributs
    typedef Key key_type;
    typedef T mapped_type;
    typedef pair<const key_type, mapped_type> value_type;
    typedef value_type* iterator;

    // Méthodes
    pair<iterator,bool> insert(value_type& x);
    iterator find(const key_type& k);
};


#endif // MAP_H