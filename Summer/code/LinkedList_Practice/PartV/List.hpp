/* Copyright (c) 2018 Jason Graalum
 *
 * List.hpp
 *
 * Class interface for Linked List class
 *
 * Practice: Part II code
 *
 * All data members and member functions are public
 *
 */
#ifndef _List_hpp_
#define _List_hpp_

#include <iostream>
#include <string>
#include "Node.hpp"

class List {
    private:
        Node * data_head;
        Node * name_head;
    public:
        List();
        void addNode(int, std::string);
        void displayByData();
        void displayByName();
};

#endif
