/* Copyright (c) 2018 Jason Graalum
 *
 * Node.hpp
 *
 * Class interface for Node class
 *
 * Practice: Part II code
 *
 * All data members and member functions are public
 *
 */
#ifndef _Node_hpp_
#define _Node_hpp_
#include <iostream>

class Node {
    private:
        int data;
        Node * next;
    public:
        Node(int);
        Node();
        void setData(int);
        int getData();
        void setNext(Node *);
        Node * getNext();
        void display();
};
#endif


