#ifndef DLIST_H
#define DLIST_H
#include <iostream>
#include "iterator.h"
#include "dnode.h"

template<class T>
class dlist
{
    public:
        typedef node_iterator<T> iterator;
        //Th Big 3
        dlist();
        ~dlist();
        dlist(const dlist<T> &other);

        //Functions
        void operator = (const dlist<T> &other);
        void front_insert(const T &item);
        void rear_insert(const T &item);
        void front_remove();
        void rear_remove();
        void show();
        void reverse_show();
        int size();

        //Iterator functions
        iterator begin(){return iterator(head);}
        iterator end(){return iterator(NULL);}
        iterator r_begin(){return iterator(tail);}
        iterator r_end(){return iterator(NULL);}

        //Iterator insert and remove functions
        void insert_after(iterator it, T item);
        void insert_before(iterator it, T item);
        void remove(iterator it);

    private:
        dnode<T> *head;
        dnode<T> *tail;
};
#include "dlist.template"
#endif