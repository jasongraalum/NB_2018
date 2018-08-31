// Copyright (c) 2018 Jason Graalum
//
// Node.cpp
//
// Class Implementation for basic Node for Linked List
//
#include "Node.hpp"

/*
    private:
        char c;
        Node * next;
*/
Node::Node(char new_char) {
    c = new_char;
    next = NULL;
}

Node::Node() {
    c = '\0';
    next = NULL;
}

Node::~Node() {

}

Node * Node::getNext() {
    return next;
}

void Node::setNext(Node * n) {
    next = n;
}

char Node::getData() {
    return c;
}

