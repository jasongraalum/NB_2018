// Copyright (c) 2018 Jason Graalum
//
// Node.hpp
//
// Class Interface for basic Node for Linked List
//
#ifndef _Node_hpp_
#define _Node_hpp_

#include <iostream>

class Node {
    private:
        char c;
        Node * next;
    public:
        Node(char);
        Node();
        ~Node();
        Node * getNext();
        void setNext(Node *);
        void setData(char);
        char getData();
};
#endif 

