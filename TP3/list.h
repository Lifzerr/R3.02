#ifndef LIST_H
#define LIST_H


#include <iostream>
#include <list>
#include <iterator>

template<class T, class A=std::allocator<T>>
class List{
    public:
        // Attributs 
        typedef T value_type;
        typedef *value_type iterator;

    public:
        // Méthodes
        iterator begin();
        iterator end();
        
        void push_back(const value_type& value);
};



#endif // LIST_H