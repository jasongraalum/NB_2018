/* Copyright (c) 2018 Jason Graalum
 *
 * Node.cpp
 *
 * Class implementation for Node class
 *
 * Practice: Part I code
 *
 * All data members and member functions are public
 *
 */
#include "Node.hpp"

//
// Default constructor
//
Node::Node() {
    data = -1;
    next = NULL;
}

//
// Simple display method
//
void Node::display() {
    std::cout << data << std::endl;
}


