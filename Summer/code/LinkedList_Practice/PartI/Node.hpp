/* Copyright (c) 2018 Jason Graalum
 *
 * Node.hpp
 *
 * Class interface for Node class
 *
 * Practice: Part I code
 *
 * All data members and member functions are public
 *
 */
#ifndef _Node_hpp_
#define _Node_hpp_
#include <iostream>

class Node {
    public:
        int data;
        Node * next;
        Node();
        void display();
};
#endif


