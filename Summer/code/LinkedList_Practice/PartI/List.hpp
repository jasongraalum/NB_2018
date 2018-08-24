/* Copyright (c) 2018 Jason Graalum
 *
 * List.hpp
 *
 * Class interface for Linked List class
 *
 * Practice: Part I code
 *
 * All data members and member functions are public
 *
 */
#ifndef _List_hpp_
#define _List_hpp_

#include <iostream>
#include "Node.hpp"

class List {
    public:
        Node * head;
        List();
        void addNode(int);
        void display();
};

#endif
