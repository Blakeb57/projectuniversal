#include <iostream>
#ifndef DNODE_H
#define DNODE_H

template<class T>
class dnode
{
    public:
        node(T d = T(), dnode *i = NULL, dnode *j = NULL){next = i; previous = j;}
        void set_nxt(dnode *l){next = l;}
        void set_prev(dnode *k){previous = k;}
        dnode *nxt()const{return next;}
        dnode *prev()const{return previous;}
        void set_data(T data){datafield = data;}
        T data()const{return datafield;}

    private:
        T datafield;
        dnode *next;
        dnode *previous;

};
#endif