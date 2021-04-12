#include <iostream>
#ifndef DNODE_H
#define DNODE_H

template<class T>
class dnode
{
    public:
        node(T d = T(), node *i = NULL, node *j = NULL){next = i; previous = j;}
        void set_next(node *l){next = l;}
        void set_previous(node *k){previous = k;}
        node *next()const{return next;}
        node *previous()const{return previous;}
        void set_data(T data){datafield = data;}
        T data()const{return datafield;}

    private:
        T datafield;
        node *next;
        node *previous;

};
#endif