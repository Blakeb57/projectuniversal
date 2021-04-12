#include <iostream>
#include "dnode.h"
#ifndef ITERATOR_H
#define ITERATOR_H

template<class T>
class node_iterator
{
    public:
        node_iterator(){ptr = NULL;}
        node_iterator(node<T> *init){ptr = init;}
        bool operator == (const node_iterator &other){return ptr == other.ptr;}
        bool operator != (const node_iterator &other){return ptr != other.ptr;}
        T operator *(){return ptr->data();}

        node_iterator operator ++()
        {
            ptr = ptr->next();
            return *this;
        }

        node_iterator operator --()
        {
            ptr = ptr->previous();
            return *this;
        }

        node_iterator operator ++(int)
        {
            node_iterator original(*this);
            ptr = ptr->next();
            return original;
        }

        node_iterator operator --(int)
        {
            node_iterator original2(*this);
            ptr = ptr->previous();
            return original2;
        }

        friend class dlist<T>;

    private:
        node<T> *ptr;

};
#endif