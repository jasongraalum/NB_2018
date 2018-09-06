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
    name = "NA";
    next_data = NULL;
    next_name = NULL;
}

//
// Constructor which populates Node data during construction
//
Node::Node(int d, std::string n) {
    data = d;
    name = n;
    next_data = NULL;
    next_name = NULL;
}

//
// Simple setter function for the Node data
//
void Node::setData(int d) {
    data = d;
}

//
// Simple setter function for the Node name
//
void Node::setName(std::string n) {
    name = n;
}

//
// Simple getter function for the Node data
//
int Node::getData() {
    return data;
}

//
// Simple getter function for the Node name
//
std::string Node::getName() {
    return name;
}

//
// Simple setter function for the Node next pointer
//
void Node::setNextData(Node * d) {
    next_data = d;
}

//
// Simple setter function for the Node next pointer
//
void Node::setNextName(Node * n) {
    next_name = n;
}

//
// Simple getter function for the Node next pointer
//
Node * Node::getNextData() {
    return next_data;
}

//
// Simple getter function for the Node next pointer
//
Node * Node::getNextName() {
    return next_name;
}

//
// Simple display method
//
void Node::display() {
    std::cout << data << " : " << name << std::endl;
}


