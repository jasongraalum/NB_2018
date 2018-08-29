/* Copyright (c) 2018 Jason Graalum
 *
 * Node.cpp
 *
 * Class implementation for Node class
 *
 * Practice: Part II code
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
// Constructor which populates Node data during construction
//
Node::Node(int d) {
    data = d;
    next = NULL;
}

//
// Simple setter function for the Node data
//
void Node::setData(int d) {
    data = d;
}

//
// Simple getter function for the Node data
//
int Node::getData() {
    return data;
}

//
// Simple setter function for the Node next pointer
//
void Node::setNext(Node * n) {
    next = n;
}

//
// Simple getter function for the Node next pointer
//
Node * Node::getNext() {
    return next;
}

//
// Simple display method
//
void Node::display() {
    std::cout << data << std::endl;
}


